@class IESLiveDetectionConfig, NSTimer, IESLiveDetectionFeatureProcessor;
@protocol IESLiveDetectionRoomProtocol, IESLiveTracker;

@interface IESLiveDetectionAnchorEngine : NSObject

@property (retain, nonatomic) IESLiveDetectionConfig *config;
@property (retain, nonatomic) NSTimer *schedule;
@property (weak, nonatomic) id<IESLiveTracker> tracker;
@property (retain, nonatomic) IESLiveDetectionFeatureProcessor *featureProcessor;
@property (weak, nonatomic) id<IESLiveDetectionRoomProtocol> roomDelegate;

- (void)_runDetect;
- (void)reportPrams:(id)a0 withVersion:(id)a1;
- (void)sendAnomalyNotification:(id)a0;
- (void)reportError:(id)a0 withVersion:(id)a1;
- (void)startDetector:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
