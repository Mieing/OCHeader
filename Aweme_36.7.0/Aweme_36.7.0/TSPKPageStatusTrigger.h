@class NSString, TSPKDelayDetectSchduler;

@interface TSPKPageStatusTrigger : TSPKDetectTrigger <TSPKDelayDetectDelegate>

@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) BOOL carePageAppear;
@property (nonatomic) BOOL carePageDisappear;
@property (nonatomic) double detectTimeDelay;
@property (nonatomic) BOOL isGrayScale;
@property (retain, nonatomic) TSPKDelayDetectSchduler *delayScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotifications;
- (void)decodeParams:(id)a0;
- (void)handlePageStatusChangeNotification:(id)a0;
- (void)cancelDetectAction;
- (void)scheduleDetectAction;
- (void)executeDetectWithActualTimeGap:(double)a0;
- (id)getComparePage;
- (void)pageStatusChangeForDetectAction:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (void)removeNotifications;
- (void)pageDidDisappear:(id)a0;
- (void)pageDidAppear:(id)a0;

@end
