@class NSData, MMBGMUniqueMutableArray, NSMutableArray;
@protocol MJCameraMusicTabViewModelDelegate, MMBGMSelectedMusicDataProtocol, MJCameraMusicTabViewModelDataSource;

@interface MJCameraMusicTabViewModel : MMBGMSelectedTabViewModel

@property (retain, nonatomic) MMBGMUniqueMutableArray *recommendedMusicInfos;
@property (retain, nonatomic) NSMutableArray *musicInfos;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic, getter=isLoadingData) BOOL loadingData;
@property (nonatomic, getter=isRecommendedDataLoaded) BOOL recommendedDataLoaded;
@property (retain, nonatomic) id<MMBGMSelectedMusicDataProtocol> insertedMusicInfo;
@property (nonatomic) BOOL hasMore;
@property (weak, nonatomic) id<MJCameraMusicTabViewModelDataSource> dataSource;
@property (weak, nonatomic) id<MJCameraMusicTabViewModelDelegate> cameraVMDelegate;

- (id)init;
- (void)loadData;
- (void)loadMoreData;
- (void)_clearLoadData;
- (void)refetchData;
- (void)reloadTemplateMusic;
- (unsigned long long)indexOfMusicId:(id)a0;
- (void)_loadData:(BOOL)a0;
- (BOOL)hasMoreData;
- (id)tabTitle;
- (unsigned long long)tabType;
- (unsigned long long)dataCount;
- (id)dataAtIndex:(unsigned long long)a0;
- (BOOL)isReccommentdTabModel;
- (void)setMusicDataToFirst:(id)a0;
- (void).cxx_destruct;

@end
