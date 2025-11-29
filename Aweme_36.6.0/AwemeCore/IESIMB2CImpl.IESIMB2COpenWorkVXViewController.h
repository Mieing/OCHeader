@interface IESIMB2CImpl.IESIMB2COpenWorkVXViewController : UIViewController <IESIMSheetVCDelegate, UITextFieldDelegate, AWEIMInAppPushProtocol, NSObject> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ contanerSheet;
    void /* unknown type, empty encoding */ configModel;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topBottomView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardBottomView;
}

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDragToDismiss:(id)a0;
- (BOOL)canShowInnerPush;
- (void)iesim_themeReload;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)loadView;

@end
