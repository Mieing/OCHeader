@class ACCCameraSubscription, NSTimer, NSString;
@protocol AWERecordFlowSourceService, IESServiceProvider;

@interface ACCShootSourceServiceImpl : NSObject <ACCShootSourceService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) BOOL holding;
@property (retain, nonatomic) NSTimer *holdBeganTimer;
@property (retain, nonatomic) id<AWERecordFlowSourceService> flowSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWithSource:(id)a0;
- (void)moveWithSource:(id)a0;
- (void)endWithSource:(id)a0;
- (void)completeWithSource:(id)a0;
- (void)startHoldingWithSource:(id)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (id)initWithServiceProvider:(id)a0;
- (void)addSubscriber:(id)a0;

@end
