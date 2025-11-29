@class IESECWinTabListModel, NSString, IESECWinTabViewController, IESECWinContext;

@interface IESECWinVideoProductDataController : AWEListDataController

@property (weak, nonatomic) IESECWinTabViewController *tabViewController;
@property (weak, nonatomic) IESECWinContext *context;
@property (weak, nonatomic) IESECWinTabListModel *tabList;
@property (copy, nonatomic) NSString *openProductID;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestWithCompletion:(id /* block */)a0 FirstRequestDate:(id)a1;
- (void)requestTabListWithcompletion:(id /* block */)a0;
- (id)initWithWinContext:(id)a0 tabListModel:(id)a1 tabViewController:(id)a2;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
