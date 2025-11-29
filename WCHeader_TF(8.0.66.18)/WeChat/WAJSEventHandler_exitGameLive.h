@class NSString;

@interface WAJSEventHandler_exitGameLive : WAJSEventHandler_BaseEvent <WCActionSheetDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)actionSheetCancel:(id)a0;

@end
