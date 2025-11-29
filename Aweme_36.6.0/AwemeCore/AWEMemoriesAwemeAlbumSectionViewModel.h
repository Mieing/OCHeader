@class AWEAwemeModel;

@interface AWEMemoriesAwemeAlbumSectionViewModel : AWEBaseListSectionViewModel

@property (weak, nonatomic) AWEAwemeModel *awemeModel;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;

@end
