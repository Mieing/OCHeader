@interface FlowKit.MessagingFileAttachmentComponent : FlowCommon.TightCouplingComponent <UIDocumentPickerDelegate> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _isVLMStyle;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _multimodalComponent;
    void /* unknown type, empty encoding */ _multifileComponent;
    void /* unknown type, empty encoding */ _attachmentModeComponent;
    void /* unknown type, empty encoding */ _imageAttachmentComponent;
    void /* unknown type, empty encoding */ _referenceModeComponent;
    void /* unknown type, empty encoding */ _attachmentViewComponent;
    void /* unknown type, empty encoding */ needResumeInputViewResponder;
}

- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
