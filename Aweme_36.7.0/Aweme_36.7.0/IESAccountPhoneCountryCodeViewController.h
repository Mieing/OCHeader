@class NSArray, NSDictionary, NSString, UITableView;

@interface IESAccountPhoneCountryCodeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSDictionary *sortedNameDictionary;
@property (retain, nonatomic) NSArray *indexArray;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSDictionary *topRegionsMap;
@property (copy, nonatomic) NSArray *orderedTopRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOrderedTopRegions:(id)a0 topRegionsMap:(id)a1 completion:(id /* block */)a2;
- (void)replaceTopCountry;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithCompletion:(id /* block */)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void)viewDidLoad;
- (void)dismissAction;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;

@end
