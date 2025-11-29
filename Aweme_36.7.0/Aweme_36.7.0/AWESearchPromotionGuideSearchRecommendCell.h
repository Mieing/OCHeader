@class UIView, DUXBaseLabel, AWEEcommerceGuideSearchAttachedTextView, AWEEcommerceGuideSearchAttributeView, NSDictionary, AWEEcomSearchWebImageView, AWEGuideSearchWordModel, AWEEcommerceSearchTagView;

@interface AWESearchPromotionGuideSearchRecommendCell : DUXBaseCollectionViewCell

@property (retain, nonatomic) AWEEcomSearchWebImageView *wordImageView;
@property (retain, nonatomic) UIView *wordImageViewLayer;
@property (retain, nonatomic) AWEEcommerceGuideSearchAttributeView *attributeView;
@property (retain, nonatomic) DUXBaseLabel *wordLabel;
@property (nonatomic) BOOL isFromEcommerce;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (nonatomic) struct _LayoutCalculateResult { BOOL isExceedDoubleLine; BOOL containsAttributeTag; } layoutResult;
@property (retain, nonatomic) AWEEcommerceSearchTagView *iconTagView;
@property (retain, nonatomic) AWEEcommerceGuideSearchAttachedTextView *attachedTextView;
@property (retain, nonatomic) AWEGuideSearchWordModel *model;

+ (double)maxAttachedTextsWidthWithModelArray:(id)a0;
+ (double)cellHeightWhenExceedDoubleLine:(struct _LayoutCalculateResult { BOOL x0; BOOL x1; })a0;
+ (double)desiredCellWidthByModel:(id)a0 layout:(struct _LayoutCalculateResult { BOOL x0; BOOL x1; })a1;

- (void)configUI;
- (void)updateSelectedStatus:(id)a0;
- (void)updateWithModel:(id)a0 isFromEcommerce:(BOOL)a1 hasTab:(BOOL)a2;
- (void).cxx_destruct;
- (void)setShadowHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)isDarkMode;

@end
