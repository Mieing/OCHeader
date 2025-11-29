@class NSString, MMTimer;

@interface WAJSEventHandler_updateAppContact : WAJSEventHandler_getAppContact <WAContactMgrExtension>

@property (copy, nonatomic) NSString *requestUsername;
@property (copy, nonatomic) NSString *requestAppId;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) MMTimer *contactGetterTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (void)onUpdateWeAppContactSuccess:(id)a0;
- (void)onGetContactTimeout;
- (void).cxx_destruct;

@end
