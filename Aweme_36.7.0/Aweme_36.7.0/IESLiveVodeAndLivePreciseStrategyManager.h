@class NSString;

@interface IESLiveVodeAndLivePreciseStrategyManager : NSObject <IESLiveTrackerDelegate, IESLiveVodeAndLivePreciseStrategyService>

@property (nonatomic) int liveShowIndex;
@property (nonatomic) int livePlayIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

@end
