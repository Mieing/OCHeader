@class NSString;
@protocol IESGCPXPlayGameBatManAlertSubscriber;

@interface IESGCPXPlayGameService_Douyin : NSObject <AWEBatManAuthServiceTrakerDelegate, AWEBatManAlertTrackerDelegate, IESGCPXPlayGameService>

@property (weak, nonatomic) id<IESGCPXPlayGameBatManAlertSubscriber> batManAlertSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addToDesktopWithGameInfo:(id)a0 completion:(id /* block */)a1;
- (void)authWithXPlayItem:(id)a0 xplayBusinessConfig:(id)a1 gameInfo:(id)a2 completion:(id /* block */)a3;
- (void)authRealNameWithXPlayItem:(id)a0 xplayBusinessConfig:(id)a1 gameInfo:(id)a2 completion:(id /* block */)a3;
- (void)authCGWithXPlayItem:(id)a0 xplayAuthInfo:(id)a1 completion:(id /* block */)a2;
- (void)setupAuthProcessTrackerDelegate;
- (void)registerBatManAlertSubscriber:(id)a0;
- (void)queryColletStatusWithGameInfo:(id)a0 completion:(id /* block */)a1;
- (void)updateColletStatusWithGameInfo:(id)a0 isCollected:(BOOL)a1 completion:(id /* block */)a2;
- (void)shareToImWithPhoto:(id)a0 completion:(id /* block */)a1;
- (void)showSharePanelWithGameInfo:(id)a0 imMsgContent:(id)a1 qrCodeParams:(id)a2 onViewController:(id)a3 clickHandler:(id /* block */)a4;
- (void)showSubscribePanelWithPopID:(id)a0 completion:(id /* block */)a1;
- (id)_batmanBusinessModelFromXPlayGameInfo:(id)a0;
- (long long)_xplayAuthResultFromBusinessResult:(long long)a0;
- (long long)_shareTypeFromSharePanelItemType:(long long)a0;
- (long long)_batManAlertButtonTypeFromTrackerButtonClicked:(int)a0;
- (long long)_batManAlertTypeFromTrackerDialogType:(int)a0;
- (long long)_batManPrivacyCheckFromTrackerRadioButtonChecked:(int)a0;
- (long long)_xplayAuthResultTypeWithBatManAuthTrackerResult:(int)a0;
- (long long)_batManAuthResultTypeFromTrackerOpenplatformResult:(int)a0;
- (long long)_batManRetainAlertTypeFromRefuseDialogType:(int)a0;
- (long long)_batManAlertButtonTypeFromTrackerRefuseButtonClicked:(int)a0;
- (void)authTrackerShowBatManPrivacyDialogStartWithType:(int)a0;
- (void)authTrackerShowBatManPrivacyDialogWithType:(int)a0 buttonClicked:(int)a1 radioButtonChecked:(int)a2;
- (void)authTrackerShowBatManAuthDialogStart;
- (void)authTrackerShowBatManAuthDialogWithResult:(int)a0;
- (void)authTrackerShowBatManRealNameDialogStart;
- (void)authTrackerShowBatManRealNameDialogWithResult:(int)a0;
- (void)authTrackerShowBatManRefuseDialogStartWithType:(int)a0;
- (void)authTrackerShowBatManRefuseDialogWithType:(int)a0 refuseButtonClicked:(int)a1;
- (void)authTrackerShowBatManH5View;
- (void)authTrackerInterconnectionEnquiryName:(int)a0 info:(id)a1;
- (void)authTrackerInterconnectionNameMutual:(int)a0 info:(id)a1;
- (void)authTrackerInterconnectionNameMutualWindowShow;
- (void)authTrackerInterconnectionNameMutualWindowClickInfo:(id)a0;
- (void)authTrackerInterconnectionNameTwoWindowShow;
- (void)authTrackerInterconnectionNameTwoWindowClick:(id)a0;
- (void)authTrackerInterconnectionNameTwoWindowResult:(int)a0 info:(id)a1;
- (void)authTrackerInterconnectionNameCompleteSuccess:(id)a0;
- (void)authTrackerUserCompleteAuthWithResult:(int)a0 originErrorCode:(int)a1 originErrorMsg:(id)a2;
- (void)onBatManSharePhotoAlertShow;
- (void)onBatManSharePhotoAlertButtonClicked:(int)a0;
- (void).cxx_destruct;

@end
