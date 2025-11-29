@class NSString;
@protocol AWEFeedDolphinAdapter;

@interface AWEAwemeDetailCommerceController : AWEAwemeNewDetailBaseController <AWEAwemeDetailCommerceControllerProtocol>

@property (retain, nonatomic) id<AWEFeedDolphinAdapter> dolphinAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupDolphinAdapter;
- (void)updateEnterAwemeDetailVC:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
