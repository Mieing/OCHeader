@interface CgiReportFlowGuardModel : NSObject

@property (nonatomic) unsigned int reportIntervalMs;
@property (nonatomic) unsigned int reportCount;

- (BOOL)checkIsLegal;
- (double)getReportDelayTime;
- (BOOL)checkSizeOut:(long long)a0;
- (id)simpleLog;
- (id)description;

@end
