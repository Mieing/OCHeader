@class NSArray, NSObject;
@protocol OS_dispatch_source, AWEDeviceCPULevelManagerDelegate;

@interface AWEDeviceCPULevelManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (weak, nonatomic) id<AWEDeviceCPULevelManagerDelegate> delegate;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSArray *levelBoundary;

- (void)produceDeviceCPUData;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
