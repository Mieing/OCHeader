@class NSArray, ACCPublishUserDeclarationOption, NSMutableDictionary, NSString, UITableView;
@protocol AWEPublishUserDeclarationViewControllerDelegate;

@interface AWEPublishUserDeclarationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *userDeclarationOptions;
@property (retain, nonatomic) ACCPublishUserDeclarationOption *selectedOption;
@property (retain, nonatomic) NSMutableDictionary *optionExtra;
@property (weak, nonatomic) id<AWEPublishUserDeclarationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptions:(id)a0 selectedOption:(id)a1 optionExtra:(id)a2 delegate:(id)a3;
- (id)contentTitleWithOption:(id)a0;
- (void)selectRouterOptionCell:(id)a0;
- (void)selectNormalOptionCell:(id)a0;
- (void)p_setupUI;
- (void)reloadData;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)bottomOffset;
- (void)p_addObservers;

@end
