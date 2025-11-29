@class NSString, NSMutableArray;

@interface IESGCPCGBitrateMonitorService : NSObject <IESGCPCGInstanceActions, IESGCPDIContextSubscriber>

@property (retain, nonatomic) NSMutableArray *statsList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 didReceivePlayStats:(id)a1;
- (void)_triggerIfBitrateNotFulfill:(id)a0;
- (void)_removeStats;
- (double)getTimestamp:(id)a0;
- (id)getStats:(id)a0;
- (void).cxx_destruct;

@end
