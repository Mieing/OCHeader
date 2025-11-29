@class NSDictionary, NSMutableDictionary, MMKV;
@protocol AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachResponseDataManager : NSObject

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (retain, nonatomic) NSMutableDictionary *responseVerifyScenesMap;
@property (retain, nonatomic) NSDictionary *filteredVerifyScenesMap;
@property (readonly, nonatomic) MMKV *mmkv;

- (BOOL)shouldRequestWithParamContext:(id)a0 excludeScenes:(id)a1;
- (void)recordFilteredVerifyScenesWithParamContext:(id)a0 scenes:(id)a1 excludeScenes:(id)a2;
- (id)getFilteredVerifyScenesWithParamContext:(id)a0;
- (void)updateVerifyScenesIfNeededWithParamContext:(id)a0 dataModel:(id)a1;
- (id)getVerifyScenesWithParamContext:(id)a0 scenes:(id)a1;
- (id)generateKeyWithParamContext:(id)a0;
- (id)filterVerifyScenes:(id)a0 excludeScenes:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
