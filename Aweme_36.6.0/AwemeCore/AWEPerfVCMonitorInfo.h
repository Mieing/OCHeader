@class NSString;

@interface AWEPerfVCMonitorInfo : NSObject <AWEPerfVCMonitorInfo> {
    unsigned long long events;
    id /* block */ block;
}

@property (readonly, nonatomic) unsigned long long lastEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;

@end
