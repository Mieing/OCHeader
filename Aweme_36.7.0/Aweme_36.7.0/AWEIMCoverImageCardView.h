@class UIStackView, UIView, AWEIMShapeView, AWEIMActiveUserIndicativeView, NSArray, AWEIMRefreshImageView, UIButton, UILabel;
@protocol IESIMRichButtonProtocol;

@interface AWEIMCoverImageCardView : UIView

@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) AWEIMRefreshImageView *imageView;
@property (retain, nonatomic) AWEIMShapeView *imageBorderShapeView;
@property (retain, nonatomic) AWEIMActiveUserIndicativeView *indicativeView;
@property (retain, nonatomic) UIStackView *titleContainer;
@property (retain, nonatomic) UIStackView *titleHorContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *rightContainer;
@property (retain, nonatomic) UIButton<IESIMRichButtonProtocol> *rightBtn;
@property (retain, nonatomic) UIStackView *bottomStackView;
@property (copy, nonatomic) NSArray *bottomImages;
@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (copy, nonatomic) id /* block */ tapRightBtnBlock;

- (void)p_addSubViews;
- (void)p_setupUIWithConfig:(id)a0;
- (void)p_setupConstraintsWithConfig:(id)a0;
- (void)clearAllImages;
- (void)p_didTappedCard;
- (void)p_createViewsWithConfig:(id)a0;
- (void)handleBtnClick:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)clearContent;

@end
