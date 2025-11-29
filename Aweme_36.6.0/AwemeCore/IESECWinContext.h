@class IESECWinRouter, IESECWinMonitor, NSString, IESECTracker, IESECWinRouterData, UIViewController;

@interface IESECWinContext : IESECContext <IESECDIContext>

@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECWinMonitor *monitor;
@property (weak, nonatomic) UIViewController *targetVC;
@property (retain, nonatomic) IESECWinRouterData *routerParams;
@property (nonatomic) double contentWidth;
@property (readonly, nonatomic) IESECWinRouter *router;
@property (nonatomic) BOOL isSecondaryPage;
@property (nonatomic) BOOL isLiveHeaderOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackerAddBussinissParams:(id)a0;
- (id)initWithParams:(id)a0 targetVC:(id)a1;
- (void).cxx_destruct;

@end
