@class IESECDurationHelper;

@interface IESECBaseShopTabViewController : UIViewController

@property (retain, nonatomic) IESECDurationHelper *stay;

- (void)trackStayWithEventName:(id)a0 duration:(long long)a1;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
