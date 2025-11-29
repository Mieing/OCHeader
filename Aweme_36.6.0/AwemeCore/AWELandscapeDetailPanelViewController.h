@class AWEAwemeModel, AWELandscapePageContext, AWELandscapeDetailViewController, UILabel, UIView, UIButton;
@protocol AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeDetailPanelViewController : UIViewController

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) AWELandscapeDetailViewController *detailViewController;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> delegate;

- (id)createContainerView;
- (id)initWithPageContext:(id)a0;
- (id)createEffectView;
- (void)updateUIByData;
- (void)updateWithModel:(id)a0 dataController:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
