@interface AWEIMIncentiveChatConversationNavBarComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider, AWEIMGrowthImpl.IncentiveChatNotify, HunterContainerLifeCycleProtocol> {
    void /* unknown type, empty encoding */ hunterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
}

- (void)containerWillDestory:(id)a0;
- (void)containerDidFirstScreen:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)hostVC_viewDidLoad;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (double)naviBarViewCustomSpacing;
- (void)naviBarViewWillAppearToPosition:(long long)a0;
- (void)naviBarViewWillDisappearFromPosition:(long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)privateChatTop3UIDDidChangeFrom:(id)a0 to:(id)a1;
- (void)userPrivateRelationDidChangeWith:(id)a0;
- (void)userGroupRelationDidChangeWith:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
