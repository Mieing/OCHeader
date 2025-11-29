@class NSDictionary, NSString, NSNumber;

@interface IESECGoodsDetailCouponComponentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSNumber *height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
