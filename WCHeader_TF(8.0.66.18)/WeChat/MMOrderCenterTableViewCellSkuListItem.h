@class MMCustomerOrderInfo, NSArray, MMWebImageView, UILabel, SkuInfo;

@interface MMOrderCenterTableViewCellSkuListItem : UIView

@property (retain, nonatomic) SkuInfo *skuInfo;
@property (retain, nonatomic) MMCustomerOrderInfo *order;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) NSArray *tagViews;
@property (retain, nonatomic) NSArray *featureViews;
@property (retain, nonatomic) UILabel *nameView;
@property (retain, nonatomic) UILabel *attributeView;
@property (retain, nonatomic) UILabel *priceView;
@property (retain, nonatomic) UILabel *countView;
@property (retain, nonatomic) UILabel *statusView;
@property (retain, nonatomic) UILabel *deliveryInfoView;

+ (double)imageHeight;
+ (struct CGSize { double x0; double x1; })imageTagSize;
+ (double)tagHeight;
+ (double)nameLineHeight;
+ (id)nameFont;
+ (id)textTagFont;
+ (double)attributeViewHeight;
+ (double)deliveryInfoViewHeight;
+ (id)statusFont;
+ (id)priceFont;
+ (id)countFont;
+ (id)nameAttributedStringForName:(id)a0 width:(double)a1 tagsWidth:(double)a2;
+ (double)preferHeightForSkuInfo:(id)a0 order:(id)a1 width:(double)a2;
+ (double)widthOfOrderLabels:(id)a0 maxWidth:(double)a1;
+ (id)nameViewTextForSkuInfo:(id)a0;
+ (id)countWordingForSkuInfo:(id)a0;
+ (id)priceWordingForSkuInfo:(id)a0 order:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (double)rightForLayoutTags:(id)a0 left:(double)a1 maxRight:(double)a2 spacing:(double)a3 centerY:(double)a4;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)viewsOfOrderLabels:(id)a0;
- (void)useTagViews:(id)a0;
- (void)useFeatureViews:(id)a0;
- (void)updateWithSkuInfo:(id)a0 order:(id)a1;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;

@end
