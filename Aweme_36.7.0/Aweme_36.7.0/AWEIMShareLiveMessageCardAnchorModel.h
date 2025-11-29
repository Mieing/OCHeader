@class AWEIMShareLiveMessageCardBenefitInfo, AWEIMShareLiveMessageCardProductInfo, NSString, AWEIMShareLifeLiveMessageCardProductInfo;

@interface AWEIMShareLiveMessageCardAnchorModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long anchorType;
@property (retain, nonatomic) AWEIMShareLiveMessageCardBenefitInfo *benefitInfo;
@property (retain, nonatomic) AWEIMShareLiveMessageCardProductInfo *productInfo;
@property (retain, nonatomic) AWEIMShareLifeLiveMessageCardProductInfo *lifeProductInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)benefitInfoJSONTransformer;
+ (id)productInfoJSONTransformer;
+ (id)lifeProductInfoJSONTransformer;
+ (id)emptyModel;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
