@class NSString;

@interface AWEProfileSessionHomeComponent : AWEProfileSessionBaseComponent <AWEUserMessage, AWEUserHomeControllerProtocol>

@property (nonatomic) BOOL isInHomepage;
@property (nonatomic) BOOL isLogouting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willLogoutWithUserID:(id)a0;
- (void)onEnterHomePageTab;
- (void)onFinishLogin:(id)a0;
- (void)onLeaveHomePageTab;
- (void)onFinishLogoutWithUid:(id)a0;
- (void)dealloc;
- (void)onInit;

@end
