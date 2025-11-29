@class NSString, AWEMusicCollectionSectionHeaderView, NSArray;

@interface AWEMiniLunaPlaylistSectionViewModel : NSObject <AWEMusicCollectionSectionViewModelProtocol>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEMusicCollectionSectionHeaderView *headerView;
@property (retain, nonatomic) NSArray *cellModelArray;
@property (copy, nonatomic) id /* block */ didShowPlaylistBlock;
@property (copy, nonatomic) id /* block */ addButtonClickBlock;
@property (retain, nonatomic) NSArray *playlistArray;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL showAddButton;
@property (nonatomic) unsigned long long highlightPlaylistCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellViewModelArray;
- (id)sectionFooterView;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (double)sectionFooterHeight;
- (id)initWithType:(unsigned long long)a0;
- (double)sectionHeaderHeight;
- (id)sectionHeaderView;

@end
