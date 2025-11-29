@interface FlowKit.MessagingScrollToBottomComponent : FlowCommon.TightCouplingComponent {
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _voiceInputComponent;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ scrollToBottomButton;
    void /* unknown type, empty encoding */ hasLongImageShareBtnFrameInitialized;
    void /* unknown type, empty encoding */ shouldDisplayLongImageShareBtn;
    void /* unknown type, empty encoding */ isLongImageShareBtnAnimating;
    void /* unknown type, empty encoding */ isBottomGuideButtonAnimating;
    void /* unknown type, empty encoding */ overBottomOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomGuideButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longImageShareButton;
    void /* unknown type, empty encoding */ shareLongImageVC;
}

- (void)shareLongImageBtnClick:(id)a0;
- (void)clickScrollToBottomBtn:(id)a0;
- (void)dismissShareLongImageBtn:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
