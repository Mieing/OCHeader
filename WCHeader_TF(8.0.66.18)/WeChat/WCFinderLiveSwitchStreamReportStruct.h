@interface WCFinderLiveSwitchStreamReportStruct : NSObject

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int prediction;
@property (nonatomic) unsigned int videoLevel;
@property (nonatomic) unsigned int isAutoSwitchConfigEnabled;
@property (nonatomic) unsigned int isAutoSwitchEnabled;
@property (nonatomic) unsigned int lagTime;
@property (nonatomic) unsigned int action;
@property (nonatomic) unsigned int switchType;
@property (nonatomic) unsigned int isSmoothSwitch;
@property (nonatomic) unsigned int reduceVideoLevel;
@property (nonatomic) unsigned int switchTime;
@property (nonatomic) unsigned int hasSwitchLag;
@property (nonatomic) unsigned int maxSwitchLagTime;
@property (nonatomic) unsigned long long actionTs;

- (id)toReport;

@end
