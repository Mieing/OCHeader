@class NSString, WCFinderMusicTopicDataProvider;
@protocol WCFinderTingAlbumViewModelDelegate;

@interface WCFinderTingAlbumViewModel : NSObject <WCFinderMusicTopicDataProviderExt>

@property (retain, nonatomic) WCFinderMusicTopicDataProvider *dataProvider;
@property (nonatomic) int innerType;
@property (weak, nonatomic) id<WCFinderTingAlbumViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataProvider:(id)a0 innerType:(int)a1;
- (void)onMusicDataProviderFetchSuc:(int)a0;
- (void)requestNextPage;
- (long long)numberOfItems;
- (id)contentVMAtItem:(long long)a0;
- (id)loadingState;
- (id)getDetailListViewModel;
- (void).cxx_destruct;

@end
