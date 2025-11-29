@class NSArray, NSString;

@interface IESECMultiCouponButtonElement : MTLModel <MTLJSONSerializing>

@property (nonatomic) double space;
@property (nonatomic) long long leadingSpace;
@property (copy, nonatomic) NSArray *couponButtonElementList;
@property (nonatomic) long long couponType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)couponButtonElementListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
