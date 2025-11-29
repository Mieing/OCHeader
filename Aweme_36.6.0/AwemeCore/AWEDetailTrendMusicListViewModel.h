@class NSArray, NSString;

@interface AWEDetailTrendMusicListViewModel : NSObject <AWEDetailMusicListViewModelProtocol>

@property (retain, nonatomic) NSArray *items;
@property (nonatomic) long long selectedMusicItemIndex;
@property (nonatomic) long long detailMusicListStatus;
@property (nonatomic) BOOL ifMusicListViewAppearHasTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateWithMusicListModel:(id)a0;
- (void)didSwitchToMusicItemAtIndex:(long long)a0;
- (id)currentMusicItemViewModel;
- (id)musicItemViewModelAtIndex:(long long)a0;
- (id)currentMusicItemModel;
- (id)musicListCommonTrackParams;
- (void)musicCollectedStatusChanged:(id)a0;
- (id)itemViewModelWithMusicItemModel:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
