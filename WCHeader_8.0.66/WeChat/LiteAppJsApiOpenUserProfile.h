@class NSDictionary, NSString;

@interface LiteAppJsApiOpenUserProfile : LiteAppJsApi <IStrangerContactMgrExt>

@property (retain, nonatomic) NSDictionary *param;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (void)onStrangerContactUpdateForbidden:(id)a0;
- (void)showErrorWhenNoContact;
- (void).cxx_destruct;

@end
