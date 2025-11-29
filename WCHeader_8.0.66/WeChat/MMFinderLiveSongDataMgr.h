@class NSString, NSMutableDictionary;

@interface MMFinderLiveSongDataMgr : MMUserService <MMServiceProtocol>

@property (nonatomic) BOOL hasMusicInfo;
@property (nonatomic) unsigned long long currSyncronizeSeq;
@property (retain, nonatomic) NSMutableDictionary *blockSongMap;
@property (readonly, nonatomic) unsigned long long allMusicDataCount;
@property (readonly, nonatomic) long long currentMusicDataState;
@property (nonatomic) int lastHeartRandomValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupOrderSongCommentDataItem:(id)a0 taskId:(id)a1 clipSongNameToAdpated:(BOOL)a2;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)uniqueKeyForTask:(id)a0;
- (void)getMusicDataListWithTaskId:(id)a0 audience:(BOOL)a1 completion:(id /* block */)a2;
- (void)synchronizeMusicDataList:(id)a0 taskId:(id)a1 completion:(id /* block */)a2;
- (void)updateLiveSongSingingStateWithFinderTaskId:(id)a0 songName:(id)a1 state:(BOOL)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (unsigned long long)genCurrentTimestampSeq;
- (void).cxx_destruct;

@end
