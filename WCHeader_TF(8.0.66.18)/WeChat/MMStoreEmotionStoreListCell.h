@class UIImageView, MMWebImageView, UIView, MMUILabel;

@interface MMStoreEmotionStoreListCell : UICollectionViewCell

@property (retain, nonatomic) UIView *baseViewContainer;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *introduceLabel;
@property (retain, nonatomic) MMWebImageView *webImageView;
@property (retain, nonatomic) MMWebImageView *tagImageView;
@property (retain, nonatomic) UIImageView *imageViewNew;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (retain, nonatomic) UIView *rightContentContainer;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *accessibilityView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initAccessibilityView;
- (void)setHighlighted:(BOOL)a0;
- (void)initBaseViewContainer;
- (void)initLineView;
- (void)initWebImageView;
- (void)initRightContainer;
- (void)initNameLabel;
- (void)initIntroduceLabel;
- (void)loadTagImageView;
- (void)configRightArrowImage;
- (void)setNameLabelText:(id)a0;
- (void)setNameLabelAttrText:(id)a0 accessibilityName:(id)a1;
- (void)setIntroduceLabelText:(id)a0;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)layoutContentView;
- (void)layoutBaseViewContainer;
- (void)layoutRightViewContainer;
- (void)updateAccessibilityLabel;
- (void).cxx_destruct;

@end
