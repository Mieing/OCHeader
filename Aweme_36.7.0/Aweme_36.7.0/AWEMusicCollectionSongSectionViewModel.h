@class NSString, AWEMusicCollectionSectionHeaderView, AWEMusicCollectionSongEmptyFooterView, NSArray;

@interface AWEMusicCollectionSongSectionViewModel : NSObject <AWEMusicCollectionSectionViewModelProtocol>

@property (retain, nonatomic) AWEMusicCollectionSectionHeaderView *headerView;
@property (retain, nonatomic) AWEMusicCollectionSongEmptyFooterView *emptyFooterView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *cellModelArray;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL showEmptyView;
@property (copy, nonatomic) id /* block */ toFindMusicClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellViewModelArray;
- (id)sectionFooterView;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (double)sectionFooterHeight;
- (id)initWithTitle:(id)a0;
- (double)sectionHeaderHeight;
- (id)sectionHeaderView;

@end
