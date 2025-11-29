@class NSArray, NSString;

@interface AWEThirdPlatformGoodsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *couponList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)couponListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
