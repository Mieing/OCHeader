@interface AWEGeneralPopupPresenter : NSObject

- (BOOL)canShowPopupWithModel:(id)a0 record:(id)a1;
- (void)performActionAtIndex:(unsigned long long)a0 withType:(long long)a1 target:(id)a2;
- (void)popupWillShowWithModel:(id)a0;
- (void)showPopupWithModel:(id)a0 onClose:(id /* block */)a1;
- (void)updateDescripterWith:(id)a0 record:(id)a1;
- (void)showPopupWithModel:(id)a0 withAlertView:(id)a1 onClose:(id /* block */)a2;
- (void)popupDidDismissWithModel:(id)a0 withSelectionIndex:(unsigned long long)a1 onClose:(id /* block */)a2;

@end
