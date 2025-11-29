@class NSString, NSMutableArray;

@interface ACCRecentMusicRequestManager : NSObject

@property (nonatomic) unsigned long long musicCntPerPage;
@property (nonatomic) unsigned long long curr;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isProcessing;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (retain, nonatomic) NSString *recentAutoMusicID;
@property (retain, nonatomic) NSString *previousAutoMusicID;

+ (id)sharedInstance;

- (void)resetRequestParams;
- (long long)queryMusicRecType:(id)a0;
- (id)loadRecentMusic;
- (void)loadRecentAutoMusicIDs;
- (BOOL)shouldRecordRecentMusicList;
- (id)getCurrentMusicList;
- (id)uidSuggestionKey;
- (id)suggestionKey:(id)a0 uid:(id)a1;
- (void)updateRecentAutoMusicIDs;
- (id)recentAutoMusicIDSuggestionKey;
- (id)previousAutoMusicIDSuggestionKey;
- (void)deleteMusicModel:(id)a0;
- (void)fetchCurrPageModelsWithCompletion:(id /* block */)a0;
- (void)saveRecentAutoMusic:(id)a0;
- (void)save:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateData;
- (void)removeQuery:(id)a0;

@end
