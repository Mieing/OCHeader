@class NSString, NSArray;

@interface AWEIMCommerceCouponMutiResultModel : AWEBaseApiModel <MTLJSONSerializing>

@property (nonatomic) long long applyStatus;
@property (retain, nonatomic) NSString *toast;
@property (retain, nonatomic) NSArray *statusModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)statusModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
