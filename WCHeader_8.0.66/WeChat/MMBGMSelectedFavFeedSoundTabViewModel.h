@class NSData, MMBGMUniqueMutableArray;
@protocol MMBGMSelectedFavFeedSoundTabViewModelDelegate;

@interface MMBGMSelectedFavFeedSoundTabViewModel : MMBGMSelectedTabViewModel

@property (retain, nonatomic) MMBGMUniqueMutableArray *musicItem;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic, getter=isLoadingData) BOOL loadingData;
@property (weak, nonatomic) id<MMBGMSelectedFavFeedSoundTabViewModelDelegate> bgmFavVMDelegate;

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
- (id)dataAtIndex:(unsigned long long)a0;
- (BOOL)shouldInsertSelectedMusicDataToFirst;
- (void)asyncGetMusicDataAtIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)addMusicData:(id)a0;
- (void)removeMusicData:(id)a0;
- (unsigned long long)indexOfMusicInfo:(id)a0;
- (void).cxx_destruct;

@end
