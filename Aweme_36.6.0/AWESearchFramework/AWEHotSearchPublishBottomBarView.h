@class UIImageView, UILabel;

@interface AWEHotSearchPublishBottomBarView : AWEHotSpotPublishEntranceBaseView

@property (retain, nonatomic) UIImageView *BarIcon;
@property (retain, nonatomic) UILabel *BarText;

- (struct CGSize { double x0; double x1; })bottomBarRealSize;
- (void)p_setupClickedAction;
- (void)p_updateLayout;
- (struct CGSize { double x0; double x1; })p_barTextCalculateSize;
- (struct CGSize { double x0; double x1; })barIconSize;
- (double)iconAndTextSpacing;
- (void)p_onShotClicked;
- (void)p_setupUI;
- (void).cxx_destruct;
- (double)horizontalPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)viewHeight;
- (void)updateWithModel:(id)a0;

@end
