@class NSMutableArray;

@interface AWEMVCardDeleteController : AWEDCFeedBaseController

@property (retain, nonatomic) NSMutableArray *waitDeleteAwemeArray;

- (void)awemeDeleteNotificationHandler:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)setupNotification;
- (void)removeWaitDeleteAwemeArray;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
