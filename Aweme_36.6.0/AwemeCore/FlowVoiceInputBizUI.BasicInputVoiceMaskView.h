@interface FlowVoiceInputBizUI.BasicInputVoiceMaskView : UIView {
    void /* unknown type, empty encoding */ voiceViewStatus;
    void /* unknown type, empty encoding */ isSphericalStyleInCancleStatus;
    void /* unknown type, empty encoding */ cancelTextColor;
    void /* unknown type, empty encoding */ cancelBackgroundColor;
    void /* unknown type, empty encoding */ recordTextColor;
    void /* unknown type, empty encoding */ recordBackgroundColor;
    void /* unknown type, empty encoding */ isVibrationTriggered;
    void /* unknown type, empty encoding */ cancelContinuousSpeakButtonIsSelected;
    void /* unknown type, empty encoding */ continuousSpeakButtonIsSelected;
    void /* unknown type, empty encoding */ clickContinuousSpeakDate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sphericalBackgroundStyleConfig;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ _settingProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sphericalBackgroundStyleEnable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sphericalBackgroundStyleCancelColorUseRed;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flowSpeakStyleDisableMaskFix;
    void /* unknown type, empty encoding */ gradientHorizontalEdgeInset;
    void /* unknown type, empty encoding */ gradientColor;
    void /* unknown type, empty encoding */ isImmersiveMode;
    void /* unknown type, empty encoding */ cancelIndicatorPadding;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ isHandsfreeEnabled;
    void /* unknown type, empty encoding */ isEnableShowOnInputAsr;
    void /* unknown type, empty encoding */ blockShortcutContinuousTrigger;
    void /* unknown type, empty encoding */ shortcutBeginPoint;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sphericalGradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sphericalBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sphericalMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelContinuousSpeakButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_continuousSpeakButton;
    void /* unknown type, empty encoding */ cancelIndicatorView;
    void /* unknown type, empty encoding */ loadingIndicatorView;
    void /* unknown type, empty encoding */ meterView;
    void /* unknown type, empty encoding */ normalContentView;
    void /* unknown type, empty encoding */ lockButton;
    void /* unknown type, empty encoding */ handsfreeContentView;
    void /* unknown type, empty encoding */ cancelButton;
    void /* unknown type, empty encoding */ sendLabel;
    void /* unknown type, empty encoding */ sendButton;
}

- (void)resetVibrationTrigger;
- (void)startLoadingAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;

@end
