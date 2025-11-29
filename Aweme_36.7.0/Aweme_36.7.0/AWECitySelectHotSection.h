@class AWECitySelectCollectionTableViewCell, NSArray;

@interface AWECitySelectHotSection : AWECitySelectSection

@property (retain, nonatomic) AWECitySelectCollectionTableViewCell *hotCityCell;
@property (retain, nonatomic) NSArray *hotCities;

- (id)viewForHeader;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)cellForIndexPath:(id)a0;
- (double)heightForHeader;

@end
