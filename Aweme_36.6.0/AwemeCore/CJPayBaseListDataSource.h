@class NSMutableDictionary;

@interface CJPayBaseListDataSource : NSObject

@property (retain, nonatomic) NSMutableDictionary *sectionsDataDic;

- (id)viewModelsAtSection:(long long)a0;
- (double)viewHeightAtIndexPath:(id)a0;
- (id)viewModelAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;

@end
