@class NSString;

@interface AWEIMConversationUrgeEnterpriseGuideComponent : AWEIMComponentBase <AWEIMConversationUrgeEnterpriseGuideProtocol>

@property (nonatomic) BOOL hasPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)presentUrgeEnterpriseGuideViewIfNeedWithScene:(long long)a0;
- (id)getGuideViewControllerWithScene:(long long)a0;

@end
