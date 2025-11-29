@class NSMutableArray, BDXBridgeAuthModelV2MethodCallLimit;

@interface BDXBridgeMethodCallTracking : NSObject

@property (retain, nonatomic) BDXBridgeAuthModelV2MethodCallLimit *callLimit;
@property (nonatomic) unsigned long long callCount;
@property (nonatomic) unsigned long long callHistoryLength;
@property (retain, nonatomic) NSMutableArray *callHistory;
@property (nonatomic) unsigned long long frequency;

- (BOOL)isFrequencyBlock;
- (void).cxx_destruct;
- (id)init;
- (void)tick;

@end
