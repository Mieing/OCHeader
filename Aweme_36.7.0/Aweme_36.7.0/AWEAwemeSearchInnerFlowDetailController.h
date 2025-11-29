@class NSDictionary, AWEListDataController, NSString;
@protocol AWEGeneralSearchInnerFlowDataControllerProtocol;

@interface AWEAwemeSearchInnerFlowDetailController : AWEAwemeNewDetailBaseController

@property (copy, nonatomic) NSDictionary *logExtraDictForFirstItem;
@property (copy, nonatomic) NSDictionary *logExtraDictForNonFirstItem;
@property (retain, nonatomic) AWEListDataController<AWEGeneralSearchInnerFlowDataControllerProtocol> *dataController;
@property (nonatomic) BOOL originItemhasRecordInInnerFlowBackupMap;
@property (copy, nonatomic) NSString *distinctInnerId;

- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)liveCellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (BOOL)enableConfigCommentSearchCardTrackParams;
- (void)modifySearchCommentTrackParamsWithModel:(id)a0;
- (void)showBackupToast;
- (void)reportInnerDocShowWithIndexPath:(id)a0;
- (void)postInnerWillDisplayNotificationWithIndexPath:(id)a0;
- (BOOL)enableSearchInnerRerankDeleteDuplicate;
- (void)modifySearchIDInLogExtraForSearchInnerRerank:(id)a0 atIndexPath:(id)a1;
- (void)modifySearchUGCTopicParamsForIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (long long)currentCellIndex;

@end
