@class NSString;

@interface IESECShopSearchBarStyle : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long useLocalGradientBorder;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
