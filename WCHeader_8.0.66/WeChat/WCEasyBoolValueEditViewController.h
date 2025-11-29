@class NSMutableArray;

@interface WCEasyBoolValueEditViewController : SettingBaseViewController

@property (retain, nonatomic) NSMutableArray *configItemArray;

- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onSwitchValueChaged:(id)a0;
- (void).cxx_destruct;

@end
