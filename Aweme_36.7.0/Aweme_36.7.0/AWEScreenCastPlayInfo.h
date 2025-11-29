@class NSString, NSArray, NSDictionary;

@interface AWEScreenCastPlayInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSArray *playAddresses;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playAddressesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
