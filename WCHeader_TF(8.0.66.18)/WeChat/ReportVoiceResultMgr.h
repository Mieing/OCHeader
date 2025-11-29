@interface ReportVoiceResultMgr : MMObject <PBMessageObserverDelegate>

@property (nonatomic) long long scene;

- (void)dealloc;
- (void)ReportResult:(id)a0 AndResult:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
