@class TXCDashboardFloatingBall, NSMutableDictionary, TXCDashboardLayoutView;

@interface TXCDashboardiOS : NSObject

@property (retain, nonatomic) NSMutableDictionary *dashboardInfo;
@property (retain, nonatomic) TXCDashboardFloatingBall *floatingBall;
@property (retain, nonatomic) TXCDashboardLayoutView *dashboardLayoutView;

+ (void)destoryContainerInMainThread:(id)a0;

- (id)init;
- (int)showDashboard:(BOOL)a0;
- (int)addDashboard:(id)a0;
- (int)removeDashboard:(id)a0;
- (int)removeAllDashboard;
- (int)setDashboard:(id)a0 status:(id)a1;
- (int)appendDashboard:(id)a0 log:(id)a1;
- (void)createFloatingBall;
- (void)createDashboardLayoutView;
- (void)onClickFloatingBall;
- (void)runInMainThread:(id /* block */)a0;
- (void)dealloc;
- (void)destoryContainer:(id)a0;
- (void).cxx_destruct;

@end
