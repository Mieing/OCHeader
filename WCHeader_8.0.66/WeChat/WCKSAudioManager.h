@class NSString, NSMutableDictionary;

@interface WCKSAudioManager : MMUserService <MMServiceProtocol, KSAudioPlayerUserDefineProtocol>

@property (nonatomic) BOOL useCronetDownloader;
@property (retain, nonatomic) NSMutableDictionary *referrerDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)cacheRootPath;
- (void)makeSureCachePatchExist;
- (void)cleanUpCache;
- (BOOL)isNetOk;
- (id)createUserAudioProcessor:(id)a0;
- (id)createAudioDownloader;
- (unsigned int)downloadRetryCnt;
- (id)limitNetParam;
- (void)setReferrer:(id)a0 forUrl:(id)a1;
- (id)getReferrerWithUrl:(id)a0;
- (void).cxx_destruct;

@end
