@class CAShapeLayer, IESECContentEdgeInsetLabel;

@interface IESECCampaignBroadcastButton : IESECButton

@property (retain, nonatomic) IESECContentEdgeInsetLabel *leftLabel;
@property (retain, nonatomic) CAShapeLayer *dashline;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double textPadding;
@property (nonatomic) long long textFont;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultEdgeInsets;
- (void)setLeftLabelWithText:(id)a0;
- (void)setRightLabelWithText:(id)a0;
- (double)defaultButtonHeight;
- (void)updateButtonSizeAndEdgeInsetsWithText:(id)a0;
- (void).cxx_destruct;
- (double)defaultTextPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (long long)defaultTextFont;

@end
