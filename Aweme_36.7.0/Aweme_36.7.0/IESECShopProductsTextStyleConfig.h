@class NSString;

@interface IESECShopProductsTextStyleConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double fontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
