@class NSString;

@interface AWEECOMIMDetailPlatformDynamicCardConfigItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *devSchema;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *techType;
@property (nonatomic) BOOL isLargeCard;
@property (nonatomic) BOOL enableClientBff;
@property (copy, nonatomic) NSString *systemHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
