@interface FlowKit.MessagingCaseComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMConversationServiceDelegate> {
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _dataController;
    void /* unknown type, empty encoding */ _inputViewDelegateComponent;
    void /* unknown type, empty encoding */ _replayComponent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navCaseShareButton;
    void /* unknown type, empty encoding */ caseMessageList;
    void /* unknown type, empty encoding */ caseRecommendId;
    void /* unknown type, empty encoding */ caseId;
    void /* unknown type, empty encoding */ caseShareLink;
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ localConversationId;
}

- (void)conversationDidCreateRemote:(id)a0 from:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
