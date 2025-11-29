@class AFDInspirationTabItem, UIViewController, NSIndexPath, NSString, AFDFriendsTabTemplateDetailVideoPlayViewController, AFDFriendsTabTemplateDetailContentContainerView, UITapGestureRecognizer;
@protocol AFDFriendsTabTemplateDetailTableViewCellDelegate;

@interface AFDFriendsTabTemplateDetailTableViewCell : UITableViewCell <AFDFriendsTabTemplateDetailVideoPlayViewControllerDelegate, AFDFriendsTabTemplateDetailContentContainerViewDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer;
@property (retain, nonatomic) AFDFriendsTabTemplateDetailContentContainerView *contentContainerView;
@property (retain, nonatomic) AFDFriendsTabTemplateDetailVideoPlayViewController *videoPlayViewController;
@property (retain, nonatomic) AFDInspirationTabItem *item;
@property (nonatomic) BOOL paused;
@property (weak, nonatomic) id<AFDFriendsTabTemplateDetailTableViewCellDelegate> delegate;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)playLoadingAnimation;
- (void)authorLabelClicked;
- (void)removeChildViewController;
- (void)addChildViewController;
- (void)onSingleTapGestureRecognizer:(id)a0;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)stop;
- (void)reset;
- (void)dealloc;
- (void)setupViews;
- (void)stopLoadingAnimation;

@end
