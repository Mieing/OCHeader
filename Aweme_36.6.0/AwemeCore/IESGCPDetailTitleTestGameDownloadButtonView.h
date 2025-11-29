@class UIButton;

@interface IESGCPDetailTitleTestGameDownloadButtonView : IESGCPDetailBaseView

@property (retain, nonatomic) UIButton *downloadButton;
@property (nonatomic) double buttonShowTime;

- (void)initConfig;
- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)updateButtonWithConfig:(id)a0;
- (void)makeTrackerNode;
- (void)downloadButtonDidClick;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
