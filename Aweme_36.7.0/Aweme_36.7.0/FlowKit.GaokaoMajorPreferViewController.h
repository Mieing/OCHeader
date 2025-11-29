@interface FlowKit.GaokaoMajorPreferViewController : FlowCommon.FlowBaseViewController <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ finishBlock;
    void /* unknown type, empty encoding */ cancelBlock;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ contentHeight;
    void /* unknown type, empty encoding */ curProvinceKey;
    void /* unknown type, empty encoding */ curProvinceName;
    void /* unknown type, empty encoding */ curProvince;
    void /* unknown type, empty encoding */ info;
    void /* unknown type, empty encoding */ prevSelectMajorItem;
    void /* unknown type, empty encoding */ prevReselectMajorItem;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_label;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_finishButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_provinceView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectMajorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_reselectMajorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scoreView;
}

- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)finishClick;
- (void)tapClose;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)handleTap;

@end
