@interface IESIMB2CImpl.IMConversationB2COpenWorkVXService : HTSService <IESIMConversationB2COpenWorkVXService> {
    void /* unknown type, empty encoding */ isRequestPanel;
    void /* unknown type, empty encoding */ pickerSheet;
    void /* unknown type, empty encoding */ guideSheet;
    void /* unknown type, empty encoding */ notNetWorkToast;
    void /* unknown type, empty encoding */ conversationContext;
    void /* unknown type, empty encoding */ cid;
    void /* unknown type, empty encoding */ cShortId;
    void /* unknown type, empty encoding */ toUserId;
    void /* unknown type, empty encoding */ toSecId;
    void /* unknown type, empty encoding */ barID;
    void /* unknown type, empty encoding */ eventType;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ typeEnum;
    void /* unknown type, empty encoding */ ext;
    void /* unknown type, empty encoding */ vxToast;
    void /* unknown type, empty encoding */ blackList;
    void /* unknown type, empty encoding */ commonToast;
    void /* unknown type, empty encoding */ certToken;
    void /* unknown type, empty encoding */ $__lazy_storage_$_storage;
}

- (void)openWorkVXPanelWithParams:(id)a0;
- (void)openPickerListPanelWithListModels:(id)a0 context:(id)a1;
- (void)sendOpenVXMessageWithModel:(id)a0 completion:(id /* block */)a1;
- (void)openWorkVXProfileWithSchema:(id)a0;
- (void)didDismissGuideSheet;
- (void)didDismissPickerSheet;
- (void).cxx_destruct;
- (id)init;

@end
