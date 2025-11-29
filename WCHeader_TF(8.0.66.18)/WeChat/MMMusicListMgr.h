@class SnsMusicStorage, NSMutableArray, NSString;

@interface MMMusicListMgr : NSObject <WCFacadeExt> {
    SnsMusicStorage *m_snsMusicStorage;
    long long m_curMusicListSource;
    BOOL m_isSnsMusicDelMatters;
    NSString *m_curUserName;
}

@property (retain, nonatomic) NSMutableArray *m_musicInfoArr;

- (id)init;
- (void)updateMusicInfoArray;
- (void)removeDuplicateItems;
- (BOOL)isMusicStorageContainsItem:(id)a0;
- (void)loadSnsMusicStorage;
- (void)addHomePageMusicItems;
- (void)saveSnsMusicStorage;
- (id)getSnsMusicStorage;
- (void)deleteSnsMusicItem:(id)a0;
- (void)clearSnsMusicStorageIfNeed;
- (void)updateMusicListBySource:(long long)a0;
- (void)onDataChangedWithAdded:(id)a0 andChanged:(id)a1 andDeleted:(id)a2;
- (void)onHomepageUpdate:(long long)a0 withAdded:(id)a1 andChanged:(id)a2 andDeleted:(id)a3 andTip:(id)a4;
- (long long)getMusicListSource;
- (void).cxx_destruct;

@end
