@class NSArray, AWEMusicCollectionSectionHeaderView, AWEMusicCollectionPlaylistFooterView, AWEMusicCollectionPlaylistCellModel, NSString, AWEUserModel;

@interface AWEMusicCollectionPlaylistSectionViewModel : NSObject <AWEMusicCollectionPlaylistCellModelProtocol, AWEMusicCollectionSectionViewModelProtocol>

@property (retain, nonatomic) AWEMusicCollectionSectionHeaderView *headerView;
@property (retain, nonatomic) AWEMusicCollectionPlaylistFooterView *footerView;
@property (retain, nonatomic) NSArray *cellModelArray;
@property (retain, nonatomic) AWEMusicCollectionPlaylistCellModel *cellModel;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isCurrentUser;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) id /* block */ gotoPlaylistBlock;
@property (copy, nonatomic) id /* block */ clickPlaylistBlock;
@property (copy, nonatomic) id /* block */ didShowPlaylistBlock;
@property (copy, nonatomic) id /* block */ addButtonClickBlock;
@property (retain, nonatomic) NSArray *playlistArray;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL showAddButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellViewModelArray;
- (id)sectionFooterView;
- (void)p_refreshHeader;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (double)sectionFooterHeight;
- (id)initWithUserModel:(id)a0;
- (double)sectionHeaderHeight;
- (id)sectionHeaderView;

@end
