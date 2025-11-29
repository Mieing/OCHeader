@class NSString, NSMutableDictionary;

@interface MusicLinkService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *checkUrlCacheList;
@property (retain, nonatomic) NSMutableDictionary *checkUrlCacheTimeList;
@property (nonatomic) long long checkUrlResultExipredTimeInterval;
@property (nonatomic) long long checkUrlLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned int)checkMusicUrlWithReqeuestInfo:(id)a0 ignoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned int)checkMusicUrls:(id)a0 completion:(id /* block */)a1;
- (void)cancelCheckMusicUrl:(unsigned int)a0;
- (id)cachedLinkInfoWithMid:(id)a0;
- (void).cxx_destruct;

@end
