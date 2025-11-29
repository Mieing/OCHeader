@class NSString, NSMutableDictionary, NSMutableSet;

@interface WAProfileService : MMUserService <WAAppItemManagerExtension, MMServiceProtocol> {
    unsigned int _lastStayDuration;
}

@property (retain, nonatomic) NSMutableDictionary *dicUserName2LastForegroundTime;
@property (retain, nonatomic) NSMutableSet *setAppID2PlayedAudio;
@property (retain, nonatomic) NSMutableDictionary *userName2ProfileResponse;
@property (nonatomic) BOOL localDataLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)getEvaluteWordingForScore:(int)a0;
- (void)loadCacheData;
- (void)saveResponse:(id)a0 Response:(id)a1;
- (void)onWeAppItemDeleted:(id)a0;
- (BOOL)loadDataFromFile:(id)a0 ToClass:(Class)a1 ToData:(id *)a2;
- (BOOL)saveDataToCacheFile:(id)a0 Path:(id)a1;
- (id)getLocalProfileInfoDictionaryForUserName:(id)a0;
- (id)getLocalProfileInfoForUserName:(id)a0;
- (void)updateGameUsedAudio:(id)a0;
- (void)updateForegroundTimeForUserName:(id)a0;
- (BOOL)canPopEvaluateDueToMinStayTime:(unsigned int)a0 UserName:(id)a1;
- (BOOL)updateProfileInfoForUserName:(id)a0 parameter:(id)a1;
- (void)onFetchProfileBaseInfo:(id)a0;
- (BOOL)submitGameEvaluateResult:(BOOL)a0 QuestionId:(id)a1 ChoseOption:(unsigned int)a2 AppId:(id)a3 Config:(id)a4;
- (void)onGameEvaluateResponse:(id)a0;
- (BOOL)updateProfileEvaluateForUserName:(id)a0 RatingValue:(double)a1;
- (BOOL)skipProfileEvaluateForUserName:(id)a0;
- (BOOL)updateProfileLikeStatusForUserName:(id)a0 myselfLike:(BOOL)a1;
- (BOOL)updateProfileEvaluateForUserName:(id)a0 OperType:(int)a1 RatingValue:(double)a2;
- (void)onUpdateProfileEvaluate:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void).cxx_destruct;

@end
