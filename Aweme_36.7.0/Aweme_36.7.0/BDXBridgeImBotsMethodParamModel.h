@class NSString, NSDictionary, NSArray;

@interface BDXBridgeImBotsMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *conversationShortId;
@property (copy, nonatomic) NSDictionary *bizExtension;
@property (retain, nonatomic) NSArray *botIds;
@property (nonatomic) long long type;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
