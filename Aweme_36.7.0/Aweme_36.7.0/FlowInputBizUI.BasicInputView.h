@interface FlowInputBizUI.BasicInputView : UIView <UIDropInteractionDelegate> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ textViewContainer;
    void /* unknown type, empty encoding */ expandButton;
    void /* unknown type, empty encoding */ sendButton;
    void /* unknown type, empty encoding */ fakeSendCover;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceButton;
    void /* unknown type, empty encoding */ droppedFileCount;
    void /* unknown type, empty encoding */ droppedImageCount;
    void /* unknown type, empty encoding */ droppedFileNameArray;
    void /* unknown type, empty encoding */ droppedFileNameDataReadyArray;
    void /* unknown type, empty encoding */ droppedFileNameDict;
    void /* unknown type, empty encoding */ droppedFileDataDict;
    void /* unknown type, empty encoding */ fileDropBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dropInteraction;
    void /* unknown type, empty encoding */ aiLyricsButton;
    void /* unknown type, empty encoding */ keyboardButton;
    void /* unknown type, empty encoding */ stopStreamingButton;
    void /* unknown type, empty encoding */ extensionToolButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_continuousSpeakLeftButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftButtonRedDot;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ textViewMask;
    void /* unknown type, empty encoding */ voiceInputView;
}

- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
