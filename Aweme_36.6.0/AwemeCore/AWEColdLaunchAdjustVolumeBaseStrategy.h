@class NSDictionary, NSArray, NSString;
@protocol AWEColdLaunchAdjustVolumeStrategyProtocol;

@interface AWEColdLaunchAdjustVolumeBaseStrategy : NSObject <AWEColdLaunchAdjustVolumeStrategyProtocol>

@property (readonly, nonatomic) double invalidVolume;
@property (retain, nonatomic) id<AWEColdLaunchAdjustVolumeStrategyProtocol> nextStrategy;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) NSArray *config;
@property (copy, nonatomic) NSDictionary *volumeStrategy;
@property (readonly, nonatomic) BOOL considerEarphone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0 volumeStrategy:(id)a1 nextStrategy:(id)a2;
- (double)adjustedVolume:(double)a0;
- (BOOL)willIgnoreByDevice;
- (double)applyNext:(double)a0;
- (double)applyVolumeStrategy:(id)a0 volume:(double)a1;
- (id)initWithInfo:(id)a0 volumeStrategy:(id)a1;
- (void).cxx_destruct;

@end
