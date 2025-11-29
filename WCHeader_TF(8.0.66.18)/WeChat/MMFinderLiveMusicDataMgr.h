@class NSString, NSMutableArray;

@interface MMFinderLiveMusicDataMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *musicSourceDataArray;
@property (retain, nonatomic) NSMutableArray *briefMusicInfos;
@property (nonatomic) BOOL hasMusicInfo;
@property (nonatomic) unsigned long long allMusicDataCount;
@property (nonatomic) BOOL recentSynchronizeResult;
@property (readonly, nonatomic) long long currentMusicDataState;
@property (readonly, nonatomic) NSMutableArray *currentSongIdCopyArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isArray:(id)a0 equalArray:(id)a1;
+ (BOOL)isEqualBetween:(id)a0 with:(id)a1;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateFinderLiveBaseMusicInfo:(id)a0;
- (BOOL)getMusicDataListFromIndex:(unsigned long long)a0 limitCount:(unsigned long long)a1 taskId:(id)a2 completion:(id /* block */)a3;
- (void)getMusicDataListWithSongIdArray:(id)a0 briefMusicInfo:(id)a1 taskId:(id)a2 completion:(id /* block */)a3;
- (BOOL)containsBriefMusicInfo:(id)a0;
- (void)insertBriefMusicInfo:(id)a0 atIndex:(unsigned long long)a1 withTaskId:(id)a2;
- (void)deleteBriefMusicInfo:(id)a0 atIndex:(unsigned long long)a1 withTaskId:(id)a2;
- (void)synchronizeBriefMusicInfos:(id)a0 withTaskId:(id)a1;
- (BOOL)isMusicDataItemContain:(id)a0;
- (void)synchronizeSongIdArrayWithTaskId:(id)a0;
- (void)notifyAllDataCountChanged;
- (void)innerSynchronizeSongIdArrayWithTaskIdDelay:(id)a0;
- (void).cxx_destruct;

@end
