@class NSString;
@protocol IWAAuthorizeAddAvatarServiceDelegate;

@interface WAAuthorizeAddAvatarProxy : NSObject <MMAuthorizeAddAvatarViewControllerDelegate>

@property (weak, nonatomic) id<IWAAuthorizeAddAvatarServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)authorizeAddAvatarViewControllerWithParams:(id)a0 delegate:(id)a1;
- (void)onAddAvatarSuccess:(id)a0;
- (void)onModAvatarSuccess:(id)a0;
- (void)cancelAddAvatar;
- (void).cxx_destruct;

@end
