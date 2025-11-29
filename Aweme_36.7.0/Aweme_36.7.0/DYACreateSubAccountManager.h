@interface DYACreateSubAccountManager : NSObject

@property (nonatomic) double showCreateAccountStartTime;
@property (nonatomic) double showCreateAccountNetworkFinishTime;
@property (nonatomic) double fillInInformationStartTime;
@property (nonatomic) double createAccoutNetworkFinishTime;

+ (id)sharedInstance;

- (void)trackFillInInformation:(double)a0 enterFrom:(id)a1;
- (void)trackCreateAccountShowDuration:(double)a0 enterFrom:(id)a1;

@end
