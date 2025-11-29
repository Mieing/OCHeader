@class WCDataItem, MMTimer, WCAdCardMultiProductsView;
@protocol WCAdMultiProductsLogicDelegate;

@interface WCAdMultiProductsLogic : WCAdvertiseOperationLogicBase

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) MMTimer *logicTimer;
@property (nonatomic) unsigned long long currentTick;
@property (retain, nonatomic) WCAdCardMultiProductsView *multiProductsView;
@property (weak, nonatomic) id<WCAdMultiProductsLogicDelegate> delegate;

- (id)initWithDataItem:(id)a0;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)start;
- (void)stop;
- (void)scheduleMultiProductsViewAction;
- (void)tryToSwitchMultiProductsView;
- (void)updateActionButton;
- (void)updateActionButtonWithScale:(double)a0 duration:(double)a1 delay:(double)a2;
- (void).cxx_destruct;

@end
