@class NSString, ACCMomentWorkMetaModel, NSArray;

@interface ACCAssetMetaModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSString *product;
@property (copy, nonatomic) NSString *propList;
@property (copy, nonatomic) NSString *autoCaptionTemplateId;
@property (copy, nonatomic) NSString *autoCaptionTemplateName;
@property (copy, nonatomic) NSString *duetOriginID;
@property (copy, nonatomic) NSString *duetFrom;
@property (retain, nonatomic) ACCMomentWorkMetaModel *momentWorkMeta;
@property (nonatomic) unsigned long long editInfo;
@property (retain, nonatomic) NSString *aigcInfo;
@property (retain, nonatomic) NSArray *templateInfos;
@property (copy, nonatomic) NSString *propExtraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propListJSONTransformer;
+ (id)momentWorkMetaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
