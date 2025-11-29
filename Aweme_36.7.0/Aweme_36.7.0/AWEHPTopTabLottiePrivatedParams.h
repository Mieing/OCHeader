@class NSString, NSArray;

@interface AWEHPTopTabLottiePrivatedParams : AWEHPTopTabLottieParams <MTLJSONSerializing>

@property (copy, nonatomic) NSString *indicatorDarkColor;
@property (copy, nonatomic) NSString *indicatorLightColor;
@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSArray *tabPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lottieParamsJSONTransformer;
+ (id)playParamsJSONTransformer;
+ (id)modelWithRawData:(id)a0 lottieID:(id)a1 error:(id *)a2;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
