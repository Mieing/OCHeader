@interface MusicSearchMgr : MusicSearchBaseMgr

- (id)init;
- (BOOL)checkSearchEnvironmentIsValid;
- (long long)recordTimeLimitInSecond;
- (void)outputPeakPower:(float)a0;
- (void)onGetMusicItemSuccess:(id)a0 fpId:(unsigned int)a1;
- (void)onGetMusicItemFail:(int)a0 sessionId:(unsigned int)a1;

@end
