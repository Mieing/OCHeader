@class NSString;

@interface MMKReportServiceImpl : NSObject <MMKReportService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportAcf:(id)a0 sessionId:(id)a1;

- (void)idkeyStat:(long long)a0 key:(long long)a1 val:(long long)a2 isImportant:(BOOL)a3;
- (void)kvStat:(int)a0 val:(id)a1;
- (long long)svrTimeMs;
- (void)setLastSessionInfo:(id)a0;
- (id)getLastSessionInfo;

@end
