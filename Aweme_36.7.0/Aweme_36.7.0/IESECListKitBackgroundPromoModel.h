@class NSString;

@interface IESECListKitBackgroundPromoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *theme;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *bgUrl;
@property (copy, nonatomic) NSString *headerBgUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
