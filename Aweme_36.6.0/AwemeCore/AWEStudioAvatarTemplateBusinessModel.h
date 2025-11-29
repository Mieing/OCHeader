@class NSString, NSDictionary;

@interface AWEStudioAvatarTemplateBusinessModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *materialId;
@property (nonatomic) BOOL needAiAvatar;
@property (nonatomic) unsigned long long aiType;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *resourceFile;
@property (copy, nonatomic) NSString *resourceName;
@property (copy, nonatomic) NSString *originalFilePath;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
