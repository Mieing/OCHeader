@class NSString, AWEIMMessageConversation;

@interface AWEIMCollapsibleBannerTracker : NSObject <IESIMCollapsibleBannerTrackerProtocol>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackBannerClickEventWithClickType:(id)a0 type:(id)a1;
- (id)__ownerIdEntry;
- (id)__conversationIdEntry;
- (id)__userRoleEntry;
- (void)trackBannerShowEventWithType:(id)a0;
- (void)trackConfirmStickOnTopMessageWithIconType:(id)a0 enterMethod:(id)a1;
- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end
