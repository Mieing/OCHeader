@interface IESIMGroupLiveStateComponent : AWEIMChatCellComponentBase <AWEIMCellLiveStatusContainerViewDelegate, IESIMGroupLiveStateInterface> {
    void /* unknown type, empty encoding */ groupLiveState;
    void /* unknown type, empty encoding */ hasWatchAuthorization;
    void /* unknown type, empty encoding */ cellViewModel;
    void /* unknown type, empty encoding */ chatModel;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ conversationBind;
    void /* unknown type, empty encoding */ floatingTipInterface;
    void /* unknown type, empty encoding */ hintService;
    void /* unknown type, empty encoding */ onlineDotService;
    void /* unknown type, empty encoding */ hintIsDiplay;
    void /* unknown type, empty encoding */ observerBind;
    void /* unknown type, empty encoding */ needReportLiveHeaderShow;
    void /* unknown type, empty encoding */ hadReportLiveRoomID;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (void)onCellWillDisplay:(id)a0;
- (void)didClickLiveStatusContainerView;
- (BOOL)isEnableShowGroupLiveState;
- (BOOL)isGroupLiving;
- (id)livingRommID;
- (id)livingOwnerID;
- (void).cxx_destruct;
- (id)init;

@end
