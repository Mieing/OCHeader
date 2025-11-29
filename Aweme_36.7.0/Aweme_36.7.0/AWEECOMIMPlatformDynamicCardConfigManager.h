@class AWEECOMIMDetailDynamicConfigModel;

@interface AWEECOMIMPlatformDynamicCardConfigManager : NSObject

@property (retain, nonatomic) AWEECOMIMDetailDynamicConfigModel *configModel;

+ (id)devScheme;
+ (id)onlineScheme;
+ (id)sharedInstance;

- (id)buildConfigKey:(id)a0 originBodyTypeNumber:(id)a1;
- (long long)techTypeWithOriginBodyTypeNumber:(id)a0 message:(id)a1;
- (id)buildTemplateCardTypeKey:(id)a0;
- (BOOL)isHitLocalConfig:(id)a0;
- (id)getDynamicCardConfigModelWithOriginBodyTypeNumber:(id)a0 message:(id)a1;
- (id)getLocalDynamicConfigModel:(id)a0;
- (BOOL)isTemplateCardType:(id)a0 originBodyTypeNumber:(id)a1;
- (id)buildTemplateCardTypeWildcardKey:(id)a0;
- (id)supportRenderType;
- (id)buildSchemaWithBundle:(id)a0 renderType:(id)a1 isDev:(BOOL)a2;
- (id)buildOldCardTypeKey:(id)a0 messageBodyType:(long long)a1;
- (id)buildNormalMessageTypeKey:(id)a0;
- (void).cxx_destruct;

@end
