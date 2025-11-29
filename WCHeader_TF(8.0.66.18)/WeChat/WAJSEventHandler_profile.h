@class NSString, NSMutableDictionary;

@interface WAJSEventHandler_profile : WAJSEventHandler_BaseEvent <IStrangerContactMgrExt> {
    NSMutableDictionary *_param;
    NSString *_scene;
    unsigned long long _contactType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)openProfileWithType:(unsigned long long)a0 param:(id)a1;
- (void)finallyOpenProfile:(id)a0;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (void)onStrangerContactUpdateForbidden:(id)a0;
- (void)showErrorWhenNoContact;
- (void).cxx_destruct;

@end
