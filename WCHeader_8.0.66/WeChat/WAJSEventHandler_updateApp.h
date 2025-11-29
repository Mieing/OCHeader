@class NSString, WAContactGetter;

@interface WAJSEventHandler_updateApp : WAJSEventHandler_BaseEvent <MMTipsViewControllerDelegate> {
    WAContactGetter *_contactGetter;
}

@property (nonatomic) unsigned int latestVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (BOOL)isUpdateAppRunning;
- (void)markUpdateAppRunning:(BOOL)a0;
- (void)endWithSuccess:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;

@end
