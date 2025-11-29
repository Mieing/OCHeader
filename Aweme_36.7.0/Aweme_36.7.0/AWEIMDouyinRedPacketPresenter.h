@interface AWEIMDouyinRedPacketPresenter : AWEIMUIViewPresenter

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (BOOL)isRedPacketEnded;
- (void)willUnBindView:(id)a0;
- (void)updateViewContent;
- (void)updateViewHiddenState;
- (void)updateMultiAvatarView;
- (void)updateTopCoverView;
- (void)updateOpenBtnView;
- (void)updateBottomCoverView;
- (void)updateTitleTopMargin;
- (void)updateCoverSubTitle;
- (id)initWithContext:(id)a0;

@end
