@class AWEListenFeedCellViewModel, NSString, AWEAwemeModel, AWEListenFeedContext, UIViewController;
@protocol AWEListenFeedInteractionViewControllerProtocol;

@interface AWEListenFeedCell : UICollectionViewCell <AWEListenFeedExtendCoverRequestDelegate, AWEListenFeedCellProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIViewController<AWEListenFeedInteractionViewControllerProtocol> *interactionVC;
@property (retain, nonatomic) AWEListenFeedContext *context;
@property (retain, nonatomic) AWEListenFeedCellViewModel *cellViewModel;
@property (copy, nonatomic) NSString *lastRequestItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)playVideoViewController;
- (BOOL)playIfNeeded;
- (void)showOrHideBottomDiversionView:(BOOL)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)showContentFilterView:(BOOL)a0;
- (void)checkIfFilterViewShowing;
- (void)interactionVC:(id)a0 requestPreExtendModelArrayWithCompletion:(id /* block */)a1;
- (void)interactionVC:(id)a0 requestNextExtendModelArrayWithCompletion:(id /* block */)a1;
- (void)interactionVC:(id)a0 updateCurrentModel:(id)a1;
- (void)recordPlayTime;
- (void)removeInteractionVC;
- (void)configWithCellViewModel:(id)a0 parentViewController:(id)a1 firstCellDismissed:(BOOL)a2 context:(id)a3 index:(long long)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (id)controlView;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
