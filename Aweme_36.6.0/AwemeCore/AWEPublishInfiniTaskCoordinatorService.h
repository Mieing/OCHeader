@class NSString;
@protocol IESServiceProvider;

@interface AWEPublishInfiniTaskCoordinatorService : NSObject <AWEPublishInfiniTaskCoordinatorServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)flowService;
- (void)bindServices:(id)a0;
- (id)flowMessageService;
- (id)progressService;
- (id)timeService;
- (id)stageService;
- (id)exceptionMonitorService;
- (void).cxx_destruct;

@end
