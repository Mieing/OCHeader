@class FinderObjectExtInfoList, NSString, NSLock, WCFinderGlobalWordingIconConfig, WCFinderDynamicIconFetcher, NSMutableDictionary, NSDictionary, NSMapTable;

@interface WCFinderWordingIconManager : NSObject

@property (nonatomic) BOOL enableStoreToLocal;
@property (retain, nonatomic) NSString *currentVersion;
@property (retain, nonatomic) NSLock *storeLock;
@property (retain, nonatomic) FinderObjectExtInfoList *pendingSaveConfig;
@property (nonatomic) unsigned long long compressLimitSize;
@property (nonatomic) long long lastSaveTime;
@property (retain, nonatomic) NSDictionary *defaultWordingConfigMap;
@property (retain, nonatomic) NSMutableDictionary *feedContentWordingConfigMap;
@property (copy, nonatomic) id /* block */ serverConfigSetter;
@property (copy, nonatomic) id /* block */ globalConfigSetter;
@property (retain, nonatomic) WCFinderGlobalWordingIconConfig *globalConfig;
@property (retain, nonatomic) WCFinderGlobalWordingIconConfig *serverGlobalConfig;
@property (retain, nonatomic) NSMapTable *imageCacheMap;
@property (retain, nonatomic) WCFinderDynamicIconFetcher *iconFetcher;
@property (retain, nonatomic) NSMutableDictionary *dynamicImageMap;
@property (retain, nonatomic) NSMutableDictionary *dynamicKeyedImageMap;
@property (retain, nonatomic) NSMutableDictionary *globalItems;
@property (retain, nonatomic) NSMutableDictionary *dynamicPageMap;
@property (retain, nonatomic) NSMutableDictionary *iconUrlDefaultDic;
@property (copy, nonatomic) id /* block */ downloadActionBlock;

+ (void)configIconURLKey:(id)a0 lightURL:(id)a1 darkURL:(id)a2 containerDic:(id)a3;
+ (void)configIconUrlDefaultDic:(id)a0;

- (id)init;
- (id)initWithEnableLocal:(BOOL)a0 compressLimitSize:(unsigned long long)a1;
- (void)prepareConfigs;
- (id)wordingConfigForFeedContentType:(int)a0;
- (id)defaultWordingConfigForFeedContentType:(int)a0;
- (void)updateWithSyncPbExtInfo:(id)a0;
- (void)updateWithSyncPbExtInfo:(id)a0 fromStorage:(BOOL)a1;
- (void)saveConfig:(id)a0;
- (void)loadConfigFromStorage:(id /* block */)a0;
- (id)wordingForSelector:(SEL)a0;
- (id)wordingValueForFeedContentType:(int)a0 wordingIdentify:(SEL)a1;
- (id)richTextForId:(int)a0 contentType:(int)a1;
- (id)textWithKey:(id)a0;
- (id)richTextWithKey:(id)a0;
- (id)pagPathWithKey:(id)a0;
- (id)pageDynamicPageItemWithKey:(id)a0;
- (id)fetchDynamicIconWithArgs:(id)a0;
- (id)fetchGlobalDynamicIconWithArgs:(id)a0;
- (id)fetchDynamicIconWithKey:(id)a0 color:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)fetchNamedIdDynamicIconWithArgs:(id)a0;
- (id)fetchDynamicIconWithIconName:(id)a0 args:(id)a1 defaultIconSVGName:(id)a2;
- (id)fetchIconConfigWithIdentifier:(SEL)a0;
- (id)fetchURLIconConfigWithIdentifier:(SEL)a0;
- (id)getValueForConfig:(id)a0 withIdentify:(SEL)a1 classType:(Class)a2;
- (id)getValueForObject:(id)a0 withIdentify:(SEL)a1 classType:(Class)a2;
- (id)dynamicIdIconUrl:(long long)a0;
- (void).cxx_destruct;

@end
