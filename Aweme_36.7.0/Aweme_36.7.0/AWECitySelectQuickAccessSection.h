@class AWECitySelectCollectionTableViewCell, NSArray;

@interface AWECitySelectQuickAccessSection : AWECitySelectSection

@property (retain, nonatomic) AWECitySelectCollectionTableViewCell *quickAccessCitysCell;
@property (retain, nonatomic) NSArray *quickAccessCities;

- (id)viewForHeader;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)cellForIndexPath:(id)a0;
- (double)heightForHeader;

@end
