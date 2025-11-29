@class UIImageView, AWEUserModel, UILabel;

@interface AWEProfileServiceComponentToolBarView : UIView

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIImageView *noticeImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *clickImageView;

- (BOOL)canShow;
- (id)styleModel;
- (id)toolBarModel;
- (double)estimateHeight;
- (void)postRecordWithReportType:(id)a0;
- (double)adaptAutoLength:(double)a0;
- (void)onTapGestureAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 user:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)setupUI;
- (BOOL)isLightTheme;

@end
