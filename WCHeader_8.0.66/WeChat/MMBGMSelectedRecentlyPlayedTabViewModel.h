@class NSData, MMBGMUniqueMutableArray;

@interface MMBGMSelectedRecentlyPlayedTabViewModel : MMBGMSelectedTabViewModel

@property (retain, nonatomic) MMBGMUniqueMutableArray *musicDataArray;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic, getter=isLoadingData) BOOL loadingData;

- (void)loadData;
- (void)loadMoreData;
- (void)reloadData;
- (void)fetchFirstPageDataWithCompletion:(id /* block */)a0;
- (void)_loadData:(BOOL)a0;
- (void)_loadData:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)hasMoreData;
- (id)tabTitle;
- (unsigned long long)tabType;
- (unsigned long long)dataCount;
- (unsigned long long)indexOfMusicInfo:(id)a0;
- (id)dataAtIndex:(unsigned long long)a0;
- (BOOL)shouldInsertSelectedMusicDataToFirst;
- (void)addMusicData:(id)a0;
- (void)removeMusicData:(id)a0;
- (void).cxx_destruct;

@end
