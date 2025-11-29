@class UIFont, CAGradientLayer, UILabel, UIView, BDImageView;

@interface AWESearchWordTagView : UIView

@property (retain, nonatomic) BDImageView *imageTypeView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIFont *textFontStyle;
@property (retain, nonatomic) UIView *gradientView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double textHeight;
@property (nonatomic) double textWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageWidth;
@property (nonatomic) BOOL hasCorner;
@property (nonatomic) BOOL hasBorder;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) long long tagType;
@property (nonatomic) double placeHolderTagRightMargin;
@property (nonatomic) double placeHolderTagLeftMargin;
@property (nonatomic) double tagViewWidth;
@property (nonatomic) double tagViewHeight;
@property (nonatomic) BOOL isEmptyView;

- (void)updateTagViewConfigWithModel:(id)a0;
- (void)resetTagViewConfig;
- (void)updateImageTypeView:(id)a0 renderModel:(id)a1;
- (void)updateTextTypeView:(id)a0;
- (void)configGradientColorWithArray:(id)a0;
- (void)configCorner:(double)a0;
- (void)configStroke:(double)a0 strokeColor:(id)a1;
- (void)configTextLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
