@class NSString;

@interface PTYApplogHooker : NSObject <PTYApplogHookProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)hook;
+ (id)pty_eventPrams:(id)a0 eventIndex:(long long)a1;
+ (void)pty_tt_trackCustomKey:(id)a0 withEvent:(id)a1;
+ (id)sharedInstance;
+ (id)getSessionId;
+ (void)setup:(id)a0;

- (void)onEventV3:(id)a0 parameter:(id)a1;
- (void)hookAppLogEvents:(unsigned long long)a0;
- (void)hookAppLogEvents;
- (void)onCustomEventKey:(id)a0 parameter:(id)a1;
- (BOOL)handleAdaptOnCustomEventKey:(id)a0 params:(id)a1;
- (id)applogEventAdaptCfgDict;

@end
