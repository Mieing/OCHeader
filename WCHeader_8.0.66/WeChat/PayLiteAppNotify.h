@class NSString, NSMutableDictionary;

@interface PayLiteAppNotify : NSObject <WXPLiteAppModuleEventCallback>

@property (retain, nonatomic) NSMutableDictionary *payNotifyMap;
@property (nonatomic) long long callbackId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)notify:(id)a0;
- (void)onEventResponse:(id)a0 event:(id)a1 data:(id)a2 callbackId:(long long)a3;
- (void).cxx_destruct;

@end
