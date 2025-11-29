@interface LocalJSEventHandler_launchApplication : LocalJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (BOOL)launchAppleStoreWithSchemeUrl:(id)a0 action:(unsigned int)a1 context:(id)a2 getError:(id *)a3 skAdItem:(id)a4;
- (id)launchAppleStoreErrorWithCode:(long long)a0 description:(id)a1;

@end
