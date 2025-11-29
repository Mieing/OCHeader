@interface AWEFormatImpl.ProfileView : UIView {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ showFollowBtn;
    void /* unknown type, empty encoding */ followType;
    void /* unknown type, empty encoding */ shareWidthConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_agentInfoView;
    void /* unknown type, empty encoding */ closeBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_followButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shareButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stackView;
}

- (void)closeProfile;
- (void)followAction;
- (void)shareAction;
- (void)showHasReqTips;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
