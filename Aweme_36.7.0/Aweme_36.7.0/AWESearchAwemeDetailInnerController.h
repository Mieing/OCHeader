@class NSString;

@interface AWESearchAwemeDetailInnerController : AWEAwemeNewDetailBaseController

@property (copy, nonatomic) NSString *distinctInnerId;
@property (nonatomic) long long initIndex;

- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)liveCellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (void)reportInnerDocShowWithIndexPath:(id)a0;
- (BOOL)enableSearchInnerReportDocShow;
- (void).cxx_destruct;

@end
