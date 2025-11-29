@class NSString;

@interface LLBizDitoMonitorImpl : NSObject <LLDitoMonitorProtocol>

@property (nonatomic) BOOL isDoubeReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)monitorTeaEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;

@end
