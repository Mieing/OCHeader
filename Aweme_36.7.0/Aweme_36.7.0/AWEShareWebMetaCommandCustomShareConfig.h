@class NSArray, NSString, NSDictionary;

@interface AWEShareWebMetaCommandCustomShareConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL useWebChannels;
@property (copy, nonatomic) NSArray *itemNames;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *shareURL;
@property (copy, nonatomic) NSString *extraParams;
@property (nonatomic) unsigned long long schemaType;
@property (copy, nonatomic) NSString *shareScene;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)integerValueTransformer;
+ (id)schemaTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
