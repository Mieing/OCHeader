@class AWESearchDynamicResourceChannelManager, NSArray, NSString, AWESearchCachalotDataController;

@interface AWESearchCachalotDynamicResourceManager : NSObject <AWESearchCachalotDynamicResourceProtocol>

@property (nonatomic) long long maxDownloadTimeout;
@property (nonatomic) BOOL enableCardFilter;
@property (retain, nonatomic) NSArray *cardFilterWhitelist;
@property (copy, nonatomic) NSString *searchType;
@property (retain, nonatomic) AWESearchDynamicResourceChannelManager *channelManager;
@property (retain, nonatomic) NSArray *cardTemplateDowngradeChannelList;
@property (weak, nonatomic) AWESearchCachalotDataController *delegate;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findSceneConf:(id)a0;
+ (BOOL)enableTemplateDowngrade;
+ (id)cardTemplateDowngradeConf;
+ (BOOL)enableSurlSupportInSearchScene:(id)a0;
+ (id)cardTemplateDowngradeSceneMap;
+ (id)templateExtraInfoInSearchType:(id)a0;
+ (BOOL)willUseSurl:(id)a0 inSearchScene:(id)a1 channel:(id)a2;
+ (id)templateExtraInfoInSearchVCName:(id)a0;
+ (id)zstdDictV1;
+ (id)conf;

- (void)checkSearchChannelStatusWithForce:(BOOL)a0;
- (void)checkResponseDataList:(id)a0 forceSyncExec:(BOOL)a1 completion:(id /* block */)a2;
- (id)buildSurlRecordFromCardList:(id)a0;
- (void)willInvokeCompletionBlock:(id)a0;
- (void)trackResultForResourceNode:(id)a0 status:(unsigned long long)a1;
- (void)removeNodesInSurlRecord:(id)a0;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0;

@end
