@class KindaUIModalDelegateObject, UIImageView, MMIUIModal, WCPayBlurViewHelper, KindaLayout, NSString;

@interface KindaModalController : NSObject <KindaViewDelegate>

@property (retain, nonatomic) KindaUIModalDelegateObject *delegateObject;
@property (retain, nonatomic) WCPayBlurViewHelper *blurViewHelper;
@property (retain, nonatomic) KindaLayout *layout;
@property (retain, nonatomic) UIImageView *snapShotView;
@property (retain, nonatomic) MMIUIModal *uiModal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removePotentialModals;

- (id)initWithModal:(id)a0;
- (void)dealloc;
- (void)initLayout;
- (void)showModal;
- (void)dismissModal;
- (BOOL)isManagerOfModal:(id)a0;
- (void)kindaViewSizeDidChange:(id)a0;
- (void)notifyKeyboardWillShow:(struct CGSize { double x0; double x1; })a0;
- (void)notifyKeyboardWillHide:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
