@class AWEIMConversationContext, NSString;
@protocol AWEIMCollapsibleBannersContainerInterfaceProtocol;

@interface AWEIMCollapsibleBannerBaseComponent : AWEIMComponentBase <IESIMCollapsibleBannerComponentProtocol>

@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (weak, nonatomic) id<AWEIMCollapsibleBannersContainerInterfaceProtocol> collapsibleBannersContainerInterface;
@property (nonatomic) BOOL showInFloatMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
