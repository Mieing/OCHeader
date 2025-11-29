@class NSString, NSDictionary;

@interface AWEShareTargetSettings : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long targetType;
@property (copy, nonatomic) NSString *shareMode;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareModeJSONTransformer;
+ (id)targetTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
