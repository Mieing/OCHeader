@class UIViewController, AWELandscapePageContext, AWEAwemeModel, UILabel, UIView, UIButton;
@protocol AWECoCreatorDetailViewControllerProtocol, AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeCoCreatorsViewController : UIViewController

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIViewController<AWECoCreatorDetailViewControllerProtocol> *coCreatorViewController;
@property (nonatomic) double splitScreenWidth;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> delegate;

- (void)showWithModel:(id)a0;
- (id)createContainerView;
- (id)initWithPageContext:(id)a0;
- (void)enterCoCreatorProfile:(id)a0;
- (id)createEffectView;
- (void)enterUserChatPageWithUserModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
