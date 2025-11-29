@class NSString;

@interface AWEIMConversationUpdateLayoutComponent : AWEIMComponentBase <AWEIMConversationUpdateLayoutComponentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)p_updateLayout;
- (void)updateConversationLayout;
- (void)updateUnreadTipsInteractor;

@end
