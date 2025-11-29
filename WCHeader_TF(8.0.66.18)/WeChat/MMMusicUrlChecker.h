@class NSString;

@interface MMMusicUrlChecker : MMObject <PBMessageObserverDelegate> {
    id /* block */ _spamCheckCompleteHandler;
    id /* block */ _shakeMusicCheckCompleteHandler;
    NSString *m_nsMusicUrl;
}

- (void)checkSpamMusicInfo:(id)a0 completeHandler:(id /* block */)a1;
- (void)checkSpamMusicInfo:(id)a0 musicDataUrl:(id)a1 completeHandler:(id /* block */)a2;
- (void)cancelCheckSpam;
- (void)checkShakeMusicUrl:(id)a0 completeHandler:(id /* block */)a1;
- (void)cancelCheckShakeMusicUrl;
- (void)handleCheckMusicResponse:(id)a0;
- (void)handleGetShakeMusicUrlResponse:(id)a0;
- (unsigned int)checkMusicUrlWithAppId:(id)a0 mid:(id)a1 webUrl:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;
- (unsigned int)checkMusicUrlWithMusicInfo:(id)a0 ignoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned int)checkMusicUrlWithMusicInfo:(id)a0 completion:(id /* block */)a1;
- (void)cancelCheckMusicUrl:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
