@interface WCFinderLiveSwitchStreamStatistic : NSObject

@property (nonatomic) unsigned long long switchType;
@property (nonatomic) BOOL isSmoothSwitch;
@property (nonatomic) unsigned long long switchBeginTime;
@property (nonatomic) unsigned long long switchEndTime;
@property (nonatomic) unsigned int hasSwitchLag;
@property (nonatomic) unsigned int maxSwitchLagTime;

@end
