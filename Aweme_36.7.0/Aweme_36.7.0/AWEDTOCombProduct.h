@class NSString;

@interface AWEDTOCombProduct : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *combProductId;
@property (copy, nonatomic) NSString *combSkuId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
