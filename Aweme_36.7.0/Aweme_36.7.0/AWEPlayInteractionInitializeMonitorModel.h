@class NSString;

@interface AWEPlayInteractionInitializeMonitorModel : NSObject

@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double viewDidLoadDuration;
@property (nonatomic) double setupContextDuration;
@property (nonatomic) double setupContainerDuration;
@property (nonatomic) double makeViewConstraintsDuration;
@property (nonatomic) double setupDispatcherManagerDuration;
@property (nonatomic) double dispatcherManagerViewDidLoadDuration;
@property (nonatomic) double setupLeftContainerDuration;
@property (nonatomic) double setupRightContainerDuration;
@property (nonatomic) double setupBottomContainerDuration;

- (void).cxx_destruct;

@end
