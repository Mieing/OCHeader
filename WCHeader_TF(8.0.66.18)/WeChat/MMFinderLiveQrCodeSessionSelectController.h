@class UINavigationController, NSString;

@interface MMFinderLiveQrCodeSessionSelectController : SessionSelectController

@property (retain, nonatomic) UINavigationController *navVC;
@property (retain, nonatomic) NSString *qrCodeUri;

- (void)callbackDelegate;
- (void)sendVisibilityOrChargeSettingsReq:(id)a0 selectChatroomArr:(id)a1 selectUserNameArr:(id)a2;
- (void)getQrSelectiveGoInfoFailWithErrorCode:(unsigned int)a0 errorMsg:(id)a1;
- (void).cxx_destruct;

@end
