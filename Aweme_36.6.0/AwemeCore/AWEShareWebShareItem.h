@class NSString, NSDictionary;

@interface AWEShareWebShareItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shareType;
@property (copy, nonatomic) NSString *shareMode;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
