@class VoIPMPUIv2ImageView, VoIPMPUIv2View;

@interface VoIPMPUIv2ScreenWindowSplitPanelView : VoIPMPUIv2View

@property (copy, nonatomic) id /* block */ onRestoreEvent;
@property (retain, nonatomic) VoIPMPUIv2View *restoreTopView;
@property (retain, nonatomic) VoIPMPUIv2ImageView *restoreTopIconImageView;
@property (nonatomic) BOOL isRestoreTopViewHidden;
@property (retain, nonatomic) VoIPMPUIv2View *restoreBottomView;
@property (retain, nonatomic) VoIPMPUIv2ImageView *restoreBottomIconImageView;
@property (nonatomic) BOOL isRestoreBottomViewHidden;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
