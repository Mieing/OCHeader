@class NSDictionary, AWEListDataController;
@protocol AWESearchLiveStreamProtocol;

@interface AWEAwemeSearchInnerFlowLiveDetailController : AWEAwemeNewDetailBaseController

@property (retain, nonatomic) AWEListDataController<AWESearchLiveStreamProtocol> *dataController;
@property (copy, nonatomic) NSDictionary *logExtraDictForFirstItem;
@property (copy, nonatomic) NSDictionary *logExtraDictForNonFirstItem;

- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)modifySearchIDInLogExtraForSearchInnerRerank:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
