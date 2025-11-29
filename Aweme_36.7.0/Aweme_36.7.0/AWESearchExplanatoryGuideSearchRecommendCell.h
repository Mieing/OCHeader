@class UIView, DUXBaseLabel, AWEEcommerceGuideSearchAttachedTextView, AWEEcommerceGuideSearchAttributeView, NSDictionary, AWEEcomSearchWebImageView, AWEGuideSearchWordModel, AWEEcommerceSearchTagView;

@interface AWESearchExplanatoryGuideSearchRecommendCell : DUXBaseCollectionViewCell

@property (retain, nonatomic) UIView *wordImageFrameView;
@property (retain, nonatomic) AWEEcomSearchWebImageView *wordImageView;
@property (retain, nonatomic) UIView *wordImageViewLayer;
@property (retain, nonatomic) AWEEcommerceGuideSearchAttributeView *attributeView;
@property (retain, nonatomic) DUXBaseLabel *wordLabel;
@property (retain, nonatomic) AWEEcommerceSearchTagView *iconTagView;
@property (retain, nonatomic) AWEEcommerceGuideSearchAttachedTextView *attachedTextView;
@property (nonatomic) BOOL isFromEcommerce;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (nonatomic) struct _LayoutReference { BOOL hasTab; unsigned long long cardStyle; unsigned long long heightStyle; unsigned long long tabStyle; BOOL isExceedDoubleLine; BOOL isAllSingleLine; BOOL containsAttributeTag; BOOL isAveraged; } layoutReference;
@property (retain, nonatomic) AWEGuideSearchWordModel *model;

+ (double)maxAttachedTextsWidthWithModelArray:(id)a0;
+ (double)cellHeightWithLayoutReference:(struct _LayoutReference { BOOL x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })a0;
+ (double)cellWidthWithModel:(id)a0 layoutReference:(struct _LayoutReference { BOOL x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })a1;

- (void)configUI;
- (void)updateLayoutForReducedHeight;
- (void)updateLayoutForNormalHeight;
- (struct CGSize { double x0; double x1; })getWordImageSize;
- (void)setWordImageFrameViewDifferentCornerRadius:(struct AWESearchCornerRadius { double x0; double x1; double x2; double x3; })a0;
- (void)removeWordImageFrameViewCornerRadius;
- (void)updateSelectedStatus:(id)a0;
- (void)updateWithModel:(id)a0 isFromEcommerce:(BOOL)a1 hasTab:(BOOL)a2;
- (void).cxx_destruct;
- (void)setShadowHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)isDarkMode;

@end
