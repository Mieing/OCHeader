@class NSString;

@interface AWEIMPlatformChatPanelBadgeExitConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long value;
@property (nonatomic) long long threshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
