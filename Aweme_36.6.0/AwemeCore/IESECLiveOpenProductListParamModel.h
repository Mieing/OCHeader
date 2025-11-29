@class NSString, NSDictionary;

@interface IESECLiveOpenProductListParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *couponId;
@property (copy, nonatomic) NSString *liveListChanel;
@property (copy, nonatomic) NSString *couponType;
@property (copy, nonatomic) NSString *couponCategory;
@property (copy, nonatomic) NSString *passThroughJson;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcm;
@property (copy, nonatomic) NSString *uniqueIndex;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
