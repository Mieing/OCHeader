@class NSString, SessionSelectController;

@interface WAJSEventHandler_shareFinderEndorsementToFriend : WAJSEventHandler_BaseEvent <SessionSelectControllerDelegate>

@property (retain, nonatomic) SessionSelectController *sessionSelectController;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *relativePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)checkFinish:(int)a0 success:(BOOL)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (BOOL)onShouldSelectContact:(id)a0;
- (void).cxx_destruct;

@end
