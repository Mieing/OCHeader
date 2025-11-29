@class NSString;

@interface AWEProfileBDUGFlowAuthHomeComponent : AWEProfileBDUGFlowAuthBaseComponent <AWEUserHomeControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEnterHomePageTab;
- (void)onLeaveHomePageTab;

@end
