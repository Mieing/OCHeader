@class NSString;

@interface IESGCPCGXPlayAuthProcessDelegate : NSObject <IESGCPXPlayGameBatManAlertSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onSharePhotoAlertShow;
- (void)onSharePhotoAlertButtonClicked:(long long)a0;
- (void)onBatManPrivacyAlertShow:(long long)a0;
- (void)onBatManPrivacyAlertClicked:(long long)a0 buttonType:(long long)a1 privacyCheck:(long long)a2;
- (void)onBatManUserCompleteAuthWithResult:(long long)a0 originErrorCode:(int)a1 originErrorMsg:(id)a2;
- (void)onBatManAuthPhoneNumAlertShow;
- (void)onBatManAuthPhoneNumAlertFinished:(long long)a0;
- (void)onBatManAuthRealNameAlertShow;
- (void)onBatManAuthRealNameAlertFinished:(long long)a0;
- (void)onBatManRetainAlertShow:(long long)a0;
- (void)onBatManRetainAlertClicked:(long long)a0 buttonType:(long long)a1;
- (void)onBatManRealNameEvent:(long long)a0 result:(long long)a1 extraInfo:(id)a2;
- (id)_realNameTrackEventStringWithEvent:(long long)a0 result:(long long)a1;
- (id)_trackAuthResultStringFromAlertButtonType:(long long)a0;
- (id)_windowTypeFromRetainAlertType:(long long)a0;
- (void)setup;

@end
