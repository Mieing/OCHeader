@interface AWEFormatImpl.FormatLiveSliceNaviBar : UIView {
    void /* unknown type, empty encoding */ animationTypeRightIndexStart;
    void /* unknown type, empty encoding */ $__lazy_storage_$_aiTag;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_onlinePeopleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sliceLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_followBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scriptDetaiBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shareButton;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ roomInfo;
    void /* unknown type, empty encoding */ closeClickHandler;
    void /* unknown type, empty encoding */ nameClickHandler;
    void /* unknown type, empty encoding */ shareClickHandler;
    void /* unknown type, empty encoding */ followClickHandler;
}

- (void)clickAvatar;
- (void)clickCloseBtn;
- (void)clickShare;
- (void)clickNameLabel;
- (void)clickScriptBtn;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
