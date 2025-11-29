@class NSString, AWEIMPageEnvironmentMonitorSession;

@interface AWEIMPageEnvironmentMonitor : NSObject

@property (readonly, nonatomic) NSString *pageName;
@property (nonatomic) BOOL notFirstSession;
@property (retain) AWEIMPageEnvironmentMonitorSession *currentSession;
@property (readonly, copy, nonatomic) NSString *trackerEventName;
@property (copy, nonatomic) id /* block */ sampleRateInfoFetchBlock;
@property (copy, nonatomic) id /* block */ extraInfoFetchBlock;

- (id)initWithPageName:(id)a0;
- (id)fetchEnvironmentWithSession:(id)a0 fireType:(long long)a1;
- (void)sessionEnd;
- (void).cxx_destruct;
- (void)sessionStart;
- (void)setupSession:(id)a0;

@end
