@class AWECitySelectCollectionTableViewCell, NSArray;

@interface AWECitySelectHistorySection : AWECitySelectSection

@property (retain, nonatomic) AWECitySelectCollectionTableViewCell *historyCityCell;
@property (retain, nonatomic) NSArray *historyCities;

- (id)viewForHeader;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)cellForIndexPath:(id)a0;
- (double)heightForHeader;

@end
