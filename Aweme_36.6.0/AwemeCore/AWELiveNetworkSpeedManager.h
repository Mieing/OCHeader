@class NSString, NSMutableArray;

@interface AWELiveNetworkSpeedManager : NSObject <AWELiveNetworkSpeedProtocal>

@property (retain, nonatomic) NSMutableArray *networkSpeedModelArray;
@property (retain, nonatomic) NSMutableArray *aggNetworkSpeedModelArray;
@property (nonatomic) long long maxNetCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)provideVideoPlayerSpeedFeatureForLvvModel;
- (void)addAggPlayerNetSpeedModelWithDataLength:(unsigned long long)a0 interval:(double)a1 netModel:(id)a2;
- (void)addPlayerNetSpeedModelWithDataLength:(unsigned long long)a0 interval:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
