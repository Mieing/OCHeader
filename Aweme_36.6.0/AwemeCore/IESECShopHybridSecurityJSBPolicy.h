@class NSDictionary, NSString;

@interface IESECShopHybridSecurityJSBPolicy : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long verifyMode;
@property (copy, nonatomic) NSDictionary *paramLimitPolicy;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
