@class NSString;

@interface AnnieXMonitorTeaReporter : NSObject

@property (copy, nonatomic) NSString *sessionId;

- (void)reportToTea:(id)a0 params:(id)a1 urlString:(id)a2;
- (void).cxx_destruct;
- (id)initWithSessionId:(id)a0;

@end
