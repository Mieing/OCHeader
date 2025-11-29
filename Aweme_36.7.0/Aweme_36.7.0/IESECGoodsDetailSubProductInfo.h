@class NSString;

@interface IESECGoodsDetailSubProductInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productId;
@property (nonatomic) unsigned long long productCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
