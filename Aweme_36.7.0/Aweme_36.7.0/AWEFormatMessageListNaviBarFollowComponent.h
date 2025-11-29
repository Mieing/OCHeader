@interface AWEFormatMessageListNaviBarFollowComponent : AWEIMComponentBase <AWEFormatFollowStatusProtocol, AWEIMMessageListNaviBarViewProvider, AWEConversationFormatEnterActions, AWEUserMessage> {
    void /* unknown type, empty encoding */ followActionFromNaviBar;
    void /* unknown type, empty encoding */ ownerId;
    void /* unknown type, empty encoding */ contentFrame;
    void /* unknown type, empty encoding */ followStatus;
    void /* unknown type, empty encoding */ hasReqFollow;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_followBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_requestedBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_followedBtn;
}

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)followParams:(BOOL)a0;
- (void)hostVC_willDealloc;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (double)naviBarViewCustomSpacing;
- (void)follow;
- (void)didUpdateFormatRoom:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
