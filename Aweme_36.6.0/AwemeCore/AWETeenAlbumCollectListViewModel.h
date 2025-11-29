@class AWETeenAlbumCollectListDataController, AWETeenAlbumCollectListSectionViewModel;

@interface AWETeenAlbumCollectListViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWETeenAlbumCollectListDataController *dataController;
@property (retain, nonatomic) AWETeenAlbumCollectListSectionViewModel *sectionViewModel;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void)removeAlbumWithAlbumID:(id)a0;
- (void).cxx_destruct;

@end
