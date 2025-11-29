@class AWEIMCommerceCouponContainerView, NSString;

@interface AWEIMCommerceCouponViewBuilder : NSObject <AWEIMCommerceCouponBuilderProtocol>

@property (weak, nonatomic) AWEIMCommerceCouponContainerView *builderView;
@property (nonatomic) BOOL remake;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSize;

- (void)buildContainerView;
- (void)buildTitleLabel;
- (void)setHuggingAndCompressionWithLabel:(id)a0 priority:(float)a1;
- (void)buildCommerceCouponView;
- (void)reBuildCommerceCouponView;
- (void)setUpBuilderView:(id)a0;
- (void)setCommerceCouponLabelPriority;
- (void)buildProcessButton;
- (void)buildIconImageView;
- (void)buildPriceIconLabel;
- (void)buildPriceLabel;
- (void)buildDiscountLabel;
- (void)buildSubtitleLabel;
- (void)buildLineLabel;
- (void)buildBottomLabel;
- (void).cxx_destruct;

@end
