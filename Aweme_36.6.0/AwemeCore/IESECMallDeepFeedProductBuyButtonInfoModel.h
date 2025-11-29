@class NSArray, NSString;

@interface IESECMallDeepFeedProductBuyButtonInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *base;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
