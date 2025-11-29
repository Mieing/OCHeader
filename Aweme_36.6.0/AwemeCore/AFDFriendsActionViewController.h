@class NSString, UIImageView, AFDFriendsActionModel, UILabel, UIButton;
@protocol AFDModalViewHelperProtocol, AFDFriendsActionViewControllerDelegate;

@interface AFDFriendsActionViewController : UIViewController <AWEPanelTransitionWithBackground, AFDFriendsActionViewControllerProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *linkLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AFDFriendsActionModel *friendsActionModel;
@property (retain, nonatomic) id<AFDModalViewHelperProtocol> helper;
@property (weak, nonatomic) id<AFDFriendsActionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (id)aAWEPadModuleAdapter;
- (void)p_setupViews;
- (void)linkLabelDidTapped;
- (void)confirmButtonDidClicked:(id)a0;
- (void)closeButtonDidClicked:(id)a0;
- (void)updateDataWithFriendsActionModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
