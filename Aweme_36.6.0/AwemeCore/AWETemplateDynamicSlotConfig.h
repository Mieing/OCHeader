@class NSString;

@interface AWETemplateDynamicSlotConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long minSegNum;
@property (nonatomic) unsigned long long maxSegNum;
@property (nonatomic) unsigned long long originalSegNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
