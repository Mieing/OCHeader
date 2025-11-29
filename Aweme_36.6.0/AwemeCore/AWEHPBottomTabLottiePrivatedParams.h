@class NSString, NSArray;

@interface AWEHPBottomTabLottiePrivatedParams : AWEHPBottomTabLottieParams <MTLJSONSerializing>

@property (retain, nonatomic) NSString *tabID;
@property (retain, nonatomic) NSArray *tabPosition;
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
