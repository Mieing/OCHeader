@class UILabel, CAGradientLayer;

@interface BTRecoFlowMsgBigPicCell : BTRecoFlowMsgCell

@property (retain, nonatomic) UILabel *videoDurationLabel;
@property (retain, nonatomic) CAGradientLayer *maskLayer;

- (void)updateWithItemMsg:(id)a0 cellWidth:(double)a1;
- (struct CGSize { double x0; double x1; })bigPlayButtonSize;
- (void)layoutSubviews;
- (void)configurateMediaIcon:(id)a0;
- (void)configureCoverMaskLayer:(id)a0;
- (void)configureTitleParams:(id)a0;
- (void)removeCoverMaskLayer;
- (void)initMaskLayer;
- (BOOL)shouldShowTitleAboveCoverViewWithItemMsg:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
