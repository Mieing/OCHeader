@class NSPointerArray, ACCRecordMode, NSString;
@protocol AFDMomentContextService, ACCServiceProvideRecipe, AFDMomentCameraPerformanceTrackService;

@interface CECMomentCameraSubModeServiceImpl : NSObject <CECMomentCameraSubModeService>

@property (retain, nonatomic) ACCRecordMode *currentMode;
@property (retain, nonatomic) NSPointerArray *subscribers;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCurrentMode:(id)a0;
- (void)changeToMode:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)addSubscriber:(id)a0;

@end
