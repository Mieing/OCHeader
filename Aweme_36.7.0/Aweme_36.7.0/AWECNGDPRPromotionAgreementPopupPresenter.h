@class AWEGDPRPromotionAgreementPopupView, AWEGeneralPopupModel;

@interface AWECNGDPRPromotionAgreementPopupPresenter : AWEGeneralPopupPresenter

@property (retain, nonatomic) AWEGeneralPopupModel *model;
@property (retain, nonatomic) AWEGDPRPromotionAgreementPopupView *alertView;

+ (id)popupID;

- (BOOL)canShowPopupWithModel:(id)a0 record:(id)a1;
- (void)popupDidDismissWithModel:(id)a0 withSelectionIndex:(unsigned long long)a1;
- (void)performActionAtIndex:(unsigned long long)a0 withType:(long long)a1 target:(id)a2;
- (void)popupWillShowWithModel:(id)a0;
- (void)requestForNewAgreement;
- (void)requestForAgreement;
- (void)showPopupWithModel:(id)a0 onClose:(id /* block */)a1;
- (void).cxx_destruct;

@end
