@class NSArray, NSDictionary, UIImage, NSString;

@interface AWEAIGCTemplateContext : AWEBaseBizConfigModel <MTLJSONSerializing, AWEStudioAIGCTemplateMutableCreationData>

@property (copy, nonatomic) NSDictionary *slotModelIDMapping;
@property (nonatomic) BOOL isSelectedLoraGenerating;
@property (retain, nonatomic) UIImage *loraCoverImage;
@property (retain, nonatomic) NSArray *avatarTemplateSlotsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarTemplateSlotsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isAIAvatarTemplateScene;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
