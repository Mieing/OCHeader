@class NSString, NSMutableDictionary;

@interface BDXLegacyWebBridgeMonitor : NSObject <IESBridgeEngineInterceptor>

@property (retain, nonatomic) NSMutableDictionary *callbackIDToThreadMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setup;

- (void)bridgeEngine:(id)a0 willHandleBridgeMessage:(id)a1;
- (void)bridgeEngine:(id)a0 didCallbackWithMessage:(id)a1;
- (id)__paramsWithContainer:(id)a0;
- (id)__monitorWithContainer:(id)a0;
- (id)__urlWithoutQuery:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
