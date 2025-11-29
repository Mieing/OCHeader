@class NSString, BDPUniqueID;

@interface BDPFacialRecognitionAlertControllerLogic_HG : NSObject <UITextViewDelegate, BDPPrivacyRegulationViewDelegate_HG>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showFacialRecognitionAlertController:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)clickPrivacyView:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
