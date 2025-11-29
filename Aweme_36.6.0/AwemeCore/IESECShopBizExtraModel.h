@class NSString;

@interface IESECShopBizExtraModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pickHintText;
@property (copy, nonatomic) NSString *pickHintDuration;
@property (copy, nonatomic) NSString *productTotalCount;
@property (copy, nonatomic) NSString *productSectionConfig;
@property (copy, nonatomic) NSString *titleLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
