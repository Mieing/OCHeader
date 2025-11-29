@class UIImageView, ColorGradientView, WCAdCommonInteractionInfo, MMUILabel;

@interface WCAdCommonInteractionView : UIView

@property (retain, nonatomic) WCAdCommonInteractionInfo *interactionInfo;
@property (retain, nonatomic) ColorGradientView *bottomGradientView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *descLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 interactionInfo:(id)a1;
- (void)generateSubviews;
- (void)layoutSubviews;
- (BOOL)isContentWordingVisible;
- (void).cxx_destruct;

@end
