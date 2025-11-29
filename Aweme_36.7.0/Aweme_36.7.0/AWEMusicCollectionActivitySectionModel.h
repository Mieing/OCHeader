@class NSString, AWEMusicCollectionActivityCellModel;

@interface AWEMusicCollectionActivitySectionModel : NSObject <AWEMusicCollectionSectionViewModelProtocol>

@property (retain, nonatomic) AWEMusicCollectionActivityCellModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellViewModelArray;
- (id)sectionFooterView;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (id)sectionHeaderView;

@end
