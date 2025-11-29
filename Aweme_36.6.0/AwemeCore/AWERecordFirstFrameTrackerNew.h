@class ACCRecordViewControllerInputData;
@protocol IESServiceProvider;

@interface AWERecordFirstFrameTrackerNew : ACCToolPerformanceTrakcer

@property (nonatomic) long long recordCount;
@property (weak, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (nonatomic) BOOL forceLoadComponent;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;

+ (id)sharedTracker;

- (void)eventBegin:(id)a0;
- (BOOL)isColdLaunchCamera;
- (void)finishTrackWithInputData:(id)a0;
- (id)getBizParmas:(id)a0;
- (void)finishTrackWithInputData:(id)a0 errorCode:(unsigned long long)a1;
- (void)checkNewSessionBegin;
- (void).cxx_destruct;
- (id)init;

@end
