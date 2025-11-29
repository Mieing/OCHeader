@class NSString;

@interface ACCTemplateMaterialInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long sourcePlatform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
