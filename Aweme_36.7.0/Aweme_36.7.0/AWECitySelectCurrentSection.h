@class AWECityModel;

@interface AWECitySelectCurrentSection : AWECitySelectSection

@property (nonatomic) BOOL showL2Only;
@property (retain, nonatomic) AWECityModel *currentCity;

- (id)viewForHeader;
- (void)clickedAtIndexPath:(id)a0;
- (void)clickHeader;
- (id)initWithTableView:(id)a0 appearance:(id)a1 disable:(BOOL)a2 showL2Only:(BOOL)a3 pageType:(long long)a4;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (void)setTableView:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (double)heightForHeader;

@end
