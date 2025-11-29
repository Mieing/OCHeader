@class NSString;

@interface AWEECOMIMDetailPlatformDynamicCardBundleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *devSchema;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) long long preCreateViewNum;
@property (nonatomic) BOOL hasBFFJS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
