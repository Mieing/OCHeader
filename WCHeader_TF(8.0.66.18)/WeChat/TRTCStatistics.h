@class NSArray;

@interface TRTCStatistics : NSObject

@property (nonatomic) unsigned int appCpu;
@property (nonatomic) unsigned int systemCpu;
@property (nonatomic) unsigned int upLoss;
@property (nonatomic) unsigned int downLoss;
@property (nonatomic) unsigned int rtt;
@property (nonatomic) unsigned int gatewayRtt;
@property (nonatomic) unsigned long long sentBytes;
@property (nonatomic) unsigned long long receivedBytes;
@property (retain, nonatomic) NSArray *localStatistics;
@property (retain, nonatomic) NSArray *remoteStatistics;

- (id)description;
- (void).cxx_destruct;

@end
