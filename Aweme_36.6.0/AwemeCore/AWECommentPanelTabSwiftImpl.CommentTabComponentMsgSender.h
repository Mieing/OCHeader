@interface AWECommentPanelTabSwiftImpl.CommentTabComponentMsgSender : NSObject <AWECommentTabContainerLifeCycleProtocol> {
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ hasTickets;
    void /* unknown type, empty encoding */ previousContentOffset;
    void /* unknown type, empty encoding */ scrollIndexSet;
    void /* unknown type, empty encoding */ didDisappearIndexSet;
    void /* unknown type, empty encoding */ willDisappearIndex;
}

- (void)commentPanelDidDismiss;
- (void)tabDidSelected:(unsigned long long)a0 from:(unsigned long long)a1 method:(unsigned long long)a2;
- (void)onCommentUIThemeChange:(BOOL)a0;
- (void)tabContainerViewWillAppear;
- (void)tabContainerViewDidAppear;
- (void)tabContainerViewWillDisappear;
- (void)tabContainerViewDidDisappear;
- (void)tabDidSelectedWithoutChange:(unsigned long long)a0 from:(unsigned long long)a1 method:(unsigned long long)a2;
- (void)commentPanelDidShow;
- (void)willDisplayPanelHeightChangeTransition:(double)a0 isFullScreen:(BOOL)a1;
- (void)tabContainerScrollViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
