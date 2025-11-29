@class AWEIMGeneralCardView, UILabel, AWEIMShareStickerMessageProps, UIView;
@protocol IESIMGradientViewProtocol;

@interface AWEIMShareStickerMessageView : UIView

@property (retain, nonatomic) AWEIMShareStickerMessageProps *props;
@property (retain, nonatomic) AWEIMGeneralCardView *cardView;
@property (retain, nonatomic) UILabel *shootSameLabel;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *gradientView;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTap:(id)a0;
- (void)shootSameButtonTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
