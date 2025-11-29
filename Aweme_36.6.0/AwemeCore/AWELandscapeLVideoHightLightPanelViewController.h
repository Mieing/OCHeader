@class AWELandscapePageContext, AWEAwemeModel, UIView, UIViewController;
@protocol AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeLVideoHightLightPanelViewController : UIViewController

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIViewController *highLightViewController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> delegate;
@property (nonatomic) BOOL isShowingChapter;

- (id)createContainerView;
- (id)createEffectView;
- (id)initWithPageContext:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)didDismiss;
- (void)viewDidLoad;
- (void)updateWithModel:(id)a0;

@end
