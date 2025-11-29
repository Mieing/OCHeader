@class NSString, BDPThreadSafeDictionary;

@interface BDPNativeAppSubscribeDispatchManager : NSObject <BDPNativeAppSubscribeDispatchManager>

@property (retain, nonatomic) BDPThreadSafeDictionary *event2ContainerMap;
@property (retain, nonatomic) BDPThreadSafeDictionary *container2EventMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)updateMap:(id)a0 key:(id)a1 values:(id)a2;
+ (id)lynxViewDispatchEvents;

- (id)initService;
- (BOOL)dispatchTMAEventIfNeed:(id)a0 uniqueID:(id)a1 pagePath:(id)a2 dest:(unsigned long long)a3 data:(id)a4;
- (void)bindEvents:(id)a0 containerID:(id)a1;
- (void)unbindEvents:(id)a0 containerID:(id)a1;
- (void)unbindAllEvents:(id)a0;
- (BOOL)dispatchTMAEvent2LynxViewIfNeed:(id)a0 uniqueID:(id)a1 pagePath:(id)a2 dest:(unsigned long long)a3 data:(id)a4;
- (BOOL)dispatchTMAEvent2DCIfNeed:(id)a0 uniqueID:(id)a1 pagePath:(id)a2 dest:(unsigned long long)a3 data:(id)a4;
- (BOOL)needPatchLynxEvent:(id)a0;
- (void).cxx_destruct;

@end
