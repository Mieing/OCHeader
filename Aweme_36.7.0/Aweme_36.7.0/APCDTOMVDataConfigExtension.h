@class NSString, CKGenericTemplateModel, AWEGenericTemplateMvSource, NSNumber;

@interface APCDTOMVDataConfigExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *templateType;
@property (retain, nonatomic) CKGenericTemplateModel *templateModel;
@property (retain, nonatomic) AWEGenericTemplateMvSource *mvSource;
@property (copy, nonatomic) NSString *dynamicTemplateTransitionPath;
@property (copy, nonatomic) NSString *dynamicTemplateMusicIdFollow;
@property (copy, nonatomic) NSString *dynamicTemplateMusicDetailMusicId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
