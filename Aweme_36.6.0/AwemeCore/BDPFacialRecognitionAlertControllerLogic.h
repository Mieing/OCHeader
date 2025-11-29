@class NSString, BDPPermissionAlertController, BDPFacialRecognitionPermissionContentView, UIView, BDPUniqueID;

@interface BDPFacialRecognitionAlertControllerLogic : NSObject <UITextViewDelegate, BDPPrivacyRegulationViewDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) UIView *maskView;
@property (weak, nonatomic) BDPPermissionAlertController *controller;
@property (weak, nonatomic) BDPFacialRecognitionPermissionContentView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAgreementTextViewInNewWay:(id)a0;
- (void)setAgreementTextView:(id)a0;
- (void)clickPrivacyViewWithType:(unsigned long long)a0;
- (void)showFacialRecognitionAlertController:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)setCheckBoxSelectedIfNeeded;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
