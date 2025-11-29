@class NSArray, NSString;

@interface AWEGoodsCompleteModelResponse : AWEBaseApiModel <AWEECommerceQualityResponseModelLostRequiredKeys>

@property (copy, nonatomic) NSArray *completeGoodsList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)completeGoodsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)lostRequiredKeys;
- (void).cxx_destruct;

@end
