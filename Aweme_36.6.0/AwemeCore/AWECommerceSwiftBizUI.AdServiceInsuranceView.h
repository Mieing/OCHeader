@interface AWECommerceSwiftBizUI.AdServiceInsuranceView : UIView <AWEAdServiceInsuranceViewProtocol> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ navigationBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_insuranceLogoImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_insuranceTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_disclosureIndicator;
}

@property (nonatomic) double height;

- (BOOL)fadeInOn:(id)a0 below:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)handleTap;
- (id)currentView;

@end
