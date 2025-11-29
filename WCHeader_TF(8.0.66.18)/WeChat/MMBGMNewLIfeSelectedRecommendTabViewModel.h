@class NSData, MMBGMUniqueMutableArray;

@interface MMBGMNewLIfeSelectedRecommendTabViewModel : MMBGMSelectedRecommendTabViewModel

@property (retain, nonatomic) MMBGMUniqueMutableArray *musicInfo;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic, getter=isLoadingData) BOOL loadingData;

- (void)loadData;
- (void)loadMoreData;
- (void)reloadData;
- (void)_loadData:(BOOL)a0;
- (BOOL)hasMoreData;
- (id)tabTitle;
- (unsigned long long)tabType;
- (unsigned long long)dataCount;
- (id)dataAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfMusicInfo:(id)a0;
- (void)addMusicData:(id)a0;
- (void)setMusicDataToFirst:(id)a0;
- (BOOL)isReccommentdTabModel;
- (void).cxx_destruct;

@end
