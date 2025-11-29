@class NSDictionary, NSMutableArray, NSString;

@interface IESGCPCGBlockMonitorService : NSObject <IESGCPCGInstanceActions, IESGCPDIContextSubscriber>

@property (retain, nonatomic) NSMutableArray *statsList;
@property (copy, nonatomic) NSDictionary *bigStallConfig;
@property (nonatomic) unsigned long long zeroFPSCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 didReceivePlayStats:(id)a1;
- (void)_doBlockReachedCalculationWithModel:(id)a0;
- (void)_doFrameRateCalculationWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
