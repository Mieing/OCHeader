@class CJPayGurdSettingsModel, NSString, NSArray, CJPayGurdImgModel;

@interface CJPayGurdManager : NSObject <IESGurdEventDelegate, CJPayGurdService, IESFalconCustomInterceptor>

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSArray *imgChannelList;
@property (copy, nonatomic) NSString *cdnUrl;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSArray *prefixArray;
@property (copy, nonatomic) CJPayGurdSettingsModel *configModel;
@property (copy, nonatomic) CJPayGurdImgModel *imgConfigModel;
@property (nonatomic) BOOL isFalconRegister;
@property (nonatomic) BOOL isEnableMergeGurdRequest;
@property (nonatomic) BOOL enableImg;
@property (nonatomic) BOOL enableCDNImg;
@property (nonatomic) BOOL enableGurdImg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)gurdDidSyncResourceWithAccessKey:(id)a0 succeed:(BOOL)a1 statusDict:(id)a2;
- (id)falconMetaDataForURLRequest:(id)a0;
- (id)falconDataForURLRequest:(id)a0;
- (BOOL)shouldInterceptForRequest:(id)a0;
- (void)syncResourcesWhenSelectHomepage;
- (void)syncResourcesWhenSelectNotify;
- (void)i_enableMergeGurdRequest:(BOOL)a0;
- (void)i_enableGurdOfflineAfterSettings;
- (id)i_getImageUrlOrName:(id)a0;
- (id)i_getPerformanceMonitorConfigDictionary;
- (id)falconPrefix;
- (void)p_syncResources;
- (void)p_addWebViewObserver;
- (void)syncResourcesWhenInit;
- (void)p_syncResourcesWithChannels:(id)a0 disableThrottle:(BOOL)a1 scene:(id)a2;
- (id)p_getPrefix;
- (BOOL)p_isImageExistGurd:(id)a0;
- (BOOL)p_isGurdImgEnable;
- (id)p_getFileFromGurdWithName:(id)a0 channel:(id)a1;
- (id)p_checkChannelStatus:(id)a0;
- (void)p_updateGurdImgResources;
- (BOOL)p_isStaticSourceWithString:(id)a0;
- (id)p_getStaticSourceFilePath:(id)a0 model:(id)a1;
- (id)p_getHtmlSourceFilePath:(id)a0 model:(id)a1;
- (id)p_parseAssetURLString:(id)a0 model:(id)a1;
- (void)p_registerFalcon;
- (void)p_unRegisterFalcon;
- (id)p_localDataWithString:(id)a0;
- (id)p_localMetaDataWithString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;

@end
