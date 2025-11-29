@class TextStateMediaContainerView, CContact, UIView, TextStateModel, ColorGradientView, TextStateFullScreenCardContentView;

@interface TextStateCompositeCardView : UIView

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) TextStateModel *textState;
@property (retain, nonatomic) TextStateMediaContainerView *mediaView;
@property (retain, nonatomic) ColorGradientView *topGradientView;
@property (retain, nonatomic) ColorGradientView *bottomGradientView;
@property (retain, nonatomic) TextStateFullScreenCardContentView *contentView;
@property (nonatomic) unsigned int masks;
@property (readonly, nonatomic) UIView *topMaskView;
@property (readonly, nonatomic) UIView *bottomMaskView;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double forceAspectRatio;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initStates;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setUsername:(id)a0 textState:(id)a1;
- (void).cxx_destruct;

@end
