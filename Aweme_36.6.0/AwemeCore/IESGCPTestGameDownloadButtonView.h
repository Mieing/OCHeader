@class IESGCPDetailLaunchButtonContainerView;

@interface IESGCPTestGameDownloadButtonView : IESGCPDetailBaseView

@property (retain, nonatomic) IESGCPDetailLaunchButtonContainerView *buttonContainerView;
@property (nonatomic) double buttonShowTime;
@property (nonatomic) BOOL isFirstShow;

- (void)bindViewModel:(id)a0;
- (void)buttonDidClick;
- (void)makeTrackerNode;
- (void)observeAndUpdateButtonThemeConfig;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupViews;

@end
