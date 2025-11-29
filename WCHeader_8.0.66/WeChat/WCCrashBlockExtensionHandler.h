@interface WCCrashBlockExtensionHandler : NSObject

+ (id)shareInstance;
+ (BOOL)isFinderType;
+ (BOOL)isLiveType;

- (id)init;
- (void)setupStdioBuffer;
- (void)dealloc;
- (id)getUserInfoForCurrentAppWithDumpType:(unsigned long long)a0;
- (void)renewInfoForReport;
- (void)renewHeavyUserInfo;
- (void)freeLogCycleArray;
- (void)resetLogCycleArray;
- (void)freeLastSceneArray;
- (void)resetSceneArray;
- (void)addLogInfo:(struct XLoggerInfo_t { int x0; char *x1; char *x2; char *x3; int x4; struct timeval { long long x0; int x1; } x5; long long x6; long long x7; long long x8; int x9; })a0 withMessage:(const char *)a1;
- (void)p_setCurrentUserName:(id)a0;
- (void)setCurrentUin:(unsigned long long)a0 andUsrName:(id)a1;
- (void)setCVersion:(unsigned int)a0;
- (void)setBlockTime:(unsigned long long)a0;
- (void)setRunloopThreshold:(unsigned int)a0;
- (void)setActiveMagicBrushBizList:(id)a0;
- (id)getLastClick;
- (id)p_getLastClick;
- (void)setLastScene:(id)a0;
- (void)setDumpType:(unsigned long long)a0;
- (void)setActiveWeAppScene:(id)a0;
- (id)getActiveWeAppScene;
- (void)setExistWeAppCount:(int)a0;
- (void)decreaseExistWeAppCount;
- (void)setLiteAppScene:(id)a0;
- (void)setLiteAppExtraInfo:(id)a0;
- (void)setFileDecriptorCount:(long long)a0;
- (void)setLivingFlag:(BOOL)a0;
- (void)setLiveId:(unsigned long long)a0;
- (void)setLiveTab:(id)a0;
- (unsigned long long)liveId;
- (void)setLiveUserType:(int)a0;
- (int)liveUserType;
- (void)setLiveVideoFps:(int)a0;
- (void)setLiveVc:(BOOL)a0;
- (void)setVoIPFlag:(int)a0;
- (int)VoIPFlag;
- (void)setVoIPRoomID:(unsigned long long)a0;
- (void)setVoIPRoomKey:(unsigned long long)a0;
- (void)setWCFinderType:(int)a0;
- (void)setAppleWatchFlag:(BOOL)a0;
- (void)finderTypeChanged:(id)a0;
- (void)liveTypeChanged:(id)a0;
- (void)setAsstFlag:(int)a0;
- (void)setFlutterRevision:(id)a0;
- (void)setFlutterDumpThreadId:(unsigned long long)a0;
- (void)setPidInfo:(id)a0;
- (void)setUserType:(unsigned long long)a0;

@end
