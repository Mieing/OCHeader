@class NSString, NSMutableDictionary;

@interface AWEMusicExtraInfoManager : NSObject <AWEMusicServiceDelegate>

@property (retain, nonatomic) NSMutableDictionary *riskInfoCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)musicServiceReadyToPlay:(id)a0;
- (unsigned long long)preloadCount;
- (id)getPlayerModelsFromMusicService:(id)a0 byNextCount:(unsigned long long)a1;
- (void)updateRiskCache:(id)a0 forKey:(id)a1 inQueue:(id)a2;
- (void)getMusicExtraInfoWithIncludes:(id)a0 musicPlayerModel:(id)a1 queueId:(id)a2 completion:(id /* block */)a3;
- (BOOL)riskInfoCacheExpired:(id)a0;
- (void)requestExtraInfoWithIncludes:(id)a0 playerModel:(id)a1 completion:(id /* block */)a2;
- (id)combineExtraInfoWithIncludes:(id)a0 fromResponse:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
