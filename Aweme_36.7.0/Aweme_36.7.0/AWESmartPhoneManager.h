@class NSString;

@interface AWESmartPhoneManager : HTSService <AWESmartPhoneManager, BDASmartPhoneDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)callNormalPhoneWithConfig:(id)a0;
- (void)fetchVirtualNumberWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)callMultiplePhoneWithSmartPhoneModels:(id)a0;
- (void)callMultiplePhoneWithSmartPhoneModels:(id)a0 isNeedHideEmptyActionSheet:(BOOL)a1;
- (void)callMultiplePhoneWithSmartPhoneModels:(id)a0 isNeedHideEmptyActionSheet:(BOOL)a1 shouldSkipSheetView:(BOOL)a2;
- (void)callSmartPhoneWithConfig:(id)a0;
- (id)smartPhoneHostURL;
- (void)smartPhoneOpenURL:(id)a0;
- (id)paramsFromConfig:(id)a0;
- (void)directCallWithSmartPhoneModel:(id)a0;
- (void)callWithSecretNumber:(id)a0 phoneNumber:(id)a1;
- (void)notifyPhoneCallDismiss;
- (void)callPrivacyPhoneNumber:(id)a0;

@end
