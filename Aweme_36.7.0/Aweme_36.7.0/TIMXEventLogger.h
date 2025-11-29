@class TIMXThreadSafeMutableDictionary, NSString, TIMXSDKInstance;
@protocol TIMXAppIMLogProtocol, TIMXNewAppLogManagerProtocol, TIMXMonitorService;

@interface TIMXEventLogger : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *timedEvents;
@property (readonly, nonatomic) id<TIMXMonitorService> monitor;
@property (readonly, nonatomic) id<TIMXAppIMLogProtocol> logger;
@property (readonly, nonatomic) id<TIMXNewAppLogManagerProtocol> applogManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logService:(id)a0 name:(id)a1 data:(id)a2;
- (id)startTimedEventWithStartInfo:(id)a0;
- (void)endTimedEventForStartMarker:(id)a0 withService:(id)a1 name:(id)a2 dataConfigBlock:(id /* block */)a3;
- (void)endTimedEventForStartMarker:(id)a0 withService:(id)a1 name:(id)a2 data:(id)a3;
- (void)startTimedEventWithMarker:(id)a0 startInfo:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
