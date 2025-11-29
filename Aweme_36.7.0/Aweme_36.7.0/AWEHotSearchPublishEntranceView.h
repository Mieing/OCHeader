@class UIImageView, UILabel;

@interface AWEHotSearchPublishEntranceView : AWEHotSearchPublishEntranceBaseView

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
- (id)init;
- (double)viewHeight;
- (void)updateWithModel:(id)a0;

@end
