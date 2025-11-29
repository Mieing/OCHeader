@class AWEFirstLetterAndCitiesModel;

@interface AWECitySelectCitySection : AWECitySelectSection

@property (retain, nonatomic) AWEFirstLetterAndCitiesModel *model;
@property (nonatomic) BOOL shouldShowL3;

- (id)viewForHeader;
- (void)clickedAtIndexPath:(id)a0;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (void)setTableView:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (double)heightForHeader;

@end
