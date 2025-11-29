@class NSDictionary;

@interface AWEFeedConfigureTimeCostModel : NSObject

@property (nonatomic) double totalDuration;
@property (nonatomic) double updatePlayerDuration;
@property (nonatomic) double updateAllSubViewsDuration;
@property (nonatomic) double updateContainerDataDuration;
@property (copy, nonatomic) NSDictionary *configElementDurations;
@property (nonatomic) double configBottomDuration;
@property (nonatomic) double dispatchUpdateAllSubViewsDuration;
@property (nonatomic) double updateViewConstraintsDuration;
@property (nonatomic) double splitDataDuration;
@property (nonatomic) double layoutElementViewsDuration;
@property (nonatomic) double activateInfoDataDuration;
@property (nonatomic) double afterSetDataDuration;
@property (nonatomic) BOOL preload;

- (void).cxx_destruct;
- (id)init;

@end
