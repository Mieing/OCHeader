@interface FlowKit.MessagingInputViewPasteComponent : FlowCommon.TightCouplingComponent {
    void /* unknown type, empty encoding */ inputViewControl;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ shouldAsyncFetchPasteboardData;
    void /* unknown type, empty encoding */ hasImageInPasteBoard;
    void /* unknown type, empty encoding */ hasPureFileInPasteBoard;
    void /* unknown type, empty encoding */ pastedFileNameArray;
    void /* unknown type, empty encoding */ pastedFileTupleArray;
}

- (void)handleApplicationNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
