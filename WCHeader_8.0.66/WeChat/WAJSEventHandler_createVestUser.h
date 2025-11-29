@class NSString, NSObject;
@protocol IWAAuthorizeAddAvatarService;

@interface WAJSEventHandler_createVestUser : WAJSEventHandler_BaseEvent <IWAAuthorizeAddAvatarServiceDelegate>

@property (retain, nonatomic) NSObject<IWAAuthorizeAddAvatarService> *addAvatarService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onIWAAuthorizeAddAvatarSuccess:(id)a0;
- (void)onIWAAuthorizeModAvatarSuccess:(id)a0;
- (void)onIWAAuthorizeAddAvatarCancel;
- (void).cxx_destruct;

@end
