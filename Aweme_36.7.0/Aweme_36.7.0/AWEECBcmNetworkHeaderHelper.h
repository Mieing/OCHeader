@class NSArray, NSDictionary, NSString;

@interface AWEECBcmNetworkHeaderHelper : NSObject <AWEAppAwemeSettingMessage> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _syncSettingsLock;
}

@property (class, readonly) AWEECBcmNetworkHeaderHelper *shared;

@property (nonatomic) BOOL addBcmChainSwitch;
@property (copy) NSArray *pathAllowlist;
@property (copy, nonatomic) NSArray *pathsForEntranceInfo;
@property (copy) NSDictionary *prefetchUrlBtmConfig;
@property (nonatomic) BOOL entranceInfoDiffSwitch;
@property (copy) NSDictionary *cachedBcmChain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awemeSettingDidChange;
- (void)addIntercept;
- (void)addEntranceInfoInterceptor;
- (id)_queryParamDictDecoded:(id)a0;
- (id)defaultPathAllowlist;
- (id)getCompressedChain:(id)a0;
- (id)getABFromBtmInfo:(id)a0;
- (id)getCDFromBtmInfo:(id)a0;
- (id)insertBtm:(id)a0 btmShowId:(id)a1 toChainArray:(id)a2 originBcmChain:(id)a3;
- (void)addBcmChain:(id)a0 toRequestHeader:(id)a1;
- (void)syncSettings;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
