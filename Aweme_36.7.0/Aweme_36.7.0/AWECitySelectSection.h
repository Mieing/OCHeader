@class AWECitySelectAppearance, NSString, UITableView;

@interface AWECitySelectSection : NSObject <AWECitySelectSectionProtocol>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWECitySelectAppearance *appearance;
@property (nonatomic) BOOL disableAction;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) long long pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForHeader;
- (id)viewForFooter;
- (void)clickedAtIndexPath:(id)a0;
- (id)initWithTableView:(id)a0 appearance:(id)a1 disable:(BOOL)a2 pageType:(long long)a3;
- (double)heightForCellAtRow:(long long)a0;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)cellForIndexPath:(id)a0;
- (double)heightForHeader;
- (double)heightForFooter;

@end
