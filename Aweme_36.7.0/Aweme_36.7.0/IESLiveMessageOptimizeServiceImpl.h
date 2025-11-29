@class NSString;

@interface IESLiveMessageOptimizeServiceImpl : NSObject <IESLiveMessageOptimizeService>

@property (nonatomic) BOOL enableOptimizeTopRank;
@property (nonatomic) long long topRankRefreshDelayTime;
@property (nonatomic) BOOL enableOptimizeHoursRank;
@property (nonatomic) long long hoursRankRefreshDelayTime;
@property (nonatomic) BOOL enableOptimizeDanmu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_configParams;
- (id)init;

@end
