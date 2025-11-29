@class NSString, NSArray;

@interface AWECutSameGamePlayConfig : MTLModel <MTLJSONSerializing, ACCCutSameGamePlayConfigProtocol>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *algorithm;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSArray *resourceTypes;
@property (nonatomic) unsigned long long outputType;
@property (copy, nonatomic) NSString *config;
@property (nonatomic) BOOL isReshape;
@property (copy, nonatomic) NSString *videoResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)outputTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
