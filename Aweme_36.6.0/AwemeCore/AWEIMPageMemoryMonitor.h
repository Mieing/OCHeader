@class NSString;

@interface AWEIMPageMemoryMonitor : AWEIMPageEnvironmentMonitor {
    NSString *_trackerEventName;
}

- (id)initWithPageName:(id)a0;
- (id)trackerEventName;
- (id)fetchEnvironmentWithSession:(id)a0 fireType:(long long)a1;
- (void).cxx_destruct;
- (void)setupSession:(id)a0;

@end
