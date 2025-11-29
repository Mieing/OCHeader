@class NSString;

@interface WCPayIdKeyRegularReporter : NSObject

@property (nonatomic) unsigned long long m_startTime;
@property (retain, nonatomic) NSString *m_logKey;
@property (nonatomic) unsigned int m_idBase;
@property (nonatomic) unsigned int m_KeyBase;
@property (nonatomic) unsigned long long m_timeInternal;

- (id)init;
- (void)reportCount;
- (void)reportSuccessCount;
- (void)reportFailedCount;
- (void)reportConsumeZone;
- (void)uploadIdKeyWithKey:(unsigned int)a0;
- (void).cxx_destruct;

@end
