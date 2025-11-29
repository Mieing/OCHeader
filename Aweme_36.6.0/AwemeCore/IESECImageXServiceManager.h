@class IESECImageXReplaceTemplatesAllConfig, NSMutableDictionary, NSDictionary, NSArray, IESECImageXReplaceFormatsConfigs, NSString;

@interface IESECImageXServiceManager : NSObject <IESECImageXServiceInterface>

@property (nonatomic) BOOL enableReplaceP3AioHost;
@property (nonatomic) BOOL enableCDNBackup;
@property (nonatomic) BOOL p3AioHostReachable;
@property (nonatomic) BOOL isDoingNetDetect;
@property (nonatomic) BOOL enableConvergeHostForService;
@property (copy, nonatomic) NSDictionary *imageHostCDNsConfig;
@property (retain, nonatomic) NSMutableDictionary *reachableDomains;
@property (nonatomic) BOOL enableReplaceImageXTemplates;
@property (retain, nonatomic) IESECImageXReplaceTemplatesAllConfig *imageXReplaceTemplatesAllConfig;
@property (copy, nonatomic) NSArray *replaceTemplatesNames;
@property (nonatomic) BOOL enableImageXFormatConvergence;
@property (retain, nonatomic) IESECImageXReplaceFormatsConfigs *imageXReplaceFormatConfigs;
@property (copy, nonatomic) NSDictionary *filterConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)betterUrlArrayForImageUrlArray:(id)a0 withBizTag:(id)a1 andSceneTag:(id)a2;
+ (id)parsingImageXTemplate:(id)a0;
+ (id)shareInstance;

- (void)handleAPPWillEnterForeground:(id)a0;
- (id)betterUrlArrayForImageUrlArray:(id)a0 withBizTag:(id)a1 andSceneTag:(id)a2;
- (void)handleNetDetectResult:(id)a0;
- (void)prepareImageXReplaceTemplatesConfig;
- (void)prepareImageXReplaceFormatConfig;
- (BOOL)p_isFilterForImageUrlArray:(id)a0 withBizTag:(id)a1 andSceneTag:(id)a2;
- (BOOL)p_enableEditImageUrl:(id)a0;
- (BOOL)replaceImageXTemplateForImageUrl:(id)a0 urlEditor:(id)a1;
- (BOOL)replaceImageXFormatForImageUrl:(id)a0 urlEditor:(id)a1;
- (id)replaceHostIfNeeded:(id)a0;
- (id)p_backupDomainsForHost:(id)a0;
- (id)p_replceHost:(id)a0 forUrlString:(id)a1;
- (id)p_kFirtConvergeDomian;
- (id)p_groupNameForDomian:(id)a0;
- (id)p_findDomianKey:(id)a0;
- (void)checkDomainsReachability;
- (BOOL)replaceImageXNormalTemplateForImageUrl:(id)a0 urlEditor:(id)a1;
- (BOOL)replaceImageXObjTemplateForImageUrl:(id)a0 urlEditor:(id)a1;
- (BOOL)replaceImageXOldTemplateForImageUrl:(id)a0 urlEditor:(id)a1;
- (id)p_replaceDomainForHost:(id)a0;
- (id)findECTemplateWithTemplateName:(id)a0;
- (id)backupURLsForImageRequestFailedWithUrlArray:(id)a0;
- (id)findOldTemplateWithTemplateName:(id)a0;
- (id)findReplaceTemplateConfigWithServiceId:(id)a0 andTemplateName:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
