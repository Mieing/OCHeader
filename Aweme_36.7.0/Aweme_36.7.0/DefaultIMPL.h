@class NSString;

@interface DefaultIMPL : NSObject <TrackerAPI, TrackerAPI_Deprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)observeDeviceDidRegistered:(id /* block */)a0;
+ (id)clientDID;
+ (void)eventV3:(id)a0 params:(id)a1;
+ (void)eventData:(id)a0;
+ (void)eventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;
+ (id)installClass;
+ (id)installInstance;
+ (void)activateDeviceWithRetryTimes:(long long)a0 completionHandler:(id /* block */)a1;
+ (BOOL)isDeviceActivated;
+ (void)impl_eventV3:(id)a0 params:(id)a1;
+ (void)trackJSONEvent:(id)a0 withType:(id)a1;
+ (long long)implType;
+ (void)event:(id)a0 label:(id)a1;
+ (void)eventData:(id)a0 isV3Format:(BOOL)a1;
+ (void)event:(id)a0 label:(id)a1 value:(id)a2 extValue:(id)a3 extValue2:(id)a4;
+ (void)event:(id)a0 label:(id)a1 value:(id)a2 extValue:(id)a3 extValue2:(id)a4 dict:(id)a5;
+ (void)event:(id)a0 label:(id)a1 json:(id)a2;
+ (void)category:(id)a0 event:(id)a1 label:(id)a2 json:(id)a3;
+ (void)category:(id)a0 event:(id)a1 label:(id)a2 dict:(id)a3;
+ (void)category:(id)a0 event:(id)a1 label:(id)a2 dict:(id)a3 json:(id)a4;
+ (void)trackEventWithCustomKeys:(id)a0 label:(id)a1 value:(id)a2 source:(id)a3 extraDic:(id)a4;
+ (void)trackItemImpressionEvent:(id)a0;
+ (void)trackLogDataEvent:(id)a0;
+ (id)sessionID;
+ (id)deviceID;
+ (BOOL)isAvailable;
+ (id)installID;
+ (void)event:(id)a0;

- (BOOL)isBDTrackerEnabled;

@end
