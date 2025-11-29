@class UIStackView, AWEIMShapeView, AWEIMAlphaTapGesture, UIView, AWEIMRefreshImageView, UILabel;
@protocol IESIMGradientViewProtocol;

@interface AWEIMSmallCardView : UIView

@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) AWEIMRefreshImageView *imageView;
@property (retain, nonatomic) AWEIMShapeView *imageBorderShapeView;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *imageGradientView;
@property (retain, nonatomic) UIStackView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (readonly, nonatomic) AWEIMAlphaTapGesture *alphaTapGesture;

- (void)p_addSubViews;
- (void)p_setupUIWithConfig:(id)a0;
- (void)p_setupConstraintsWithConfig:(id)a0;
- (void)p_createViewsWithConfig:(id)a0;
- (void)p_didTappedCard:(id)a0;
- (void)p_updateImageContainerWithConfig:(id)a0;
- (void)p_updateTitleContainerWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;

@end
