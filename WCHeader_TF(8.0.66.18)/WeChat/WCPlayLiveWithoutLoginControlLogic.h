@class WCPlayLiveWithoutLoginViewController, NSString, WCPlayLiveWithoutLoginGetQRCodeCGI, FinderLiveContact, FinderLiveInfo, WCPlayLiveWithoutLoginQRCodeViewController, WCPlayLiveWithoutLoginCheckQRCodeStatusCGI, MMTimer;

@interface WCPlayLiveWithoutLoginControlLogic : WCBaseControlLogic <WCPlayLiveWithoutLoginGetQRCodeDelegate, WCPlayLiveWithoutLoginCheckQRCodeStatusDelegate>

@property (retain, nonatomic) WCPlayLiveWithoutLoginGetQRCodeCGI *getQRCodeCGI;
@property (retain, nonatomic) WCPlayLiveWithoutLoginCheckQRCodeStatusCGI *checkQRCodeCGI;
@property (retain, nonatomic) WCPlayLiveWithoutLoginQRCodeViewController *playLiveWithoutLoginQRCodeViewController;
@property (retain, nonatomic) WCPlayLiveWithoutLoginViewController *playerVc;
@property (nonatomic) double nextCheckStatusTime;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) BOOL isInCheckQRCodeStatus;
@property (retain, nonatomic) NSString *qrcodeToken;
@property (retain, nonatomic) FinderLiveContact *anchorLiveContact;
@property (retain, nonatomic) FinderLiveInfo *liveInfo;
@property (copy, nonatomic) id /* block */ refreshTokenCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startCheckQRCodeStatusTimeInterval:(double)a0;
- (void)startCheckQRCodeStatus;
- (void)startGetQRCode;
- (void)onCheckQRCodeStatusSuccuss:(id)a0 nextPollingTs:(double)a1 liveContact:(id)a2 liveInfo:(id)a3;
- (void)onCheckQRCodeStatusFail;
- (void)onGetQRCodeSuccuss:(id)a0 image:(id)a1 token:(id)a2;
- (void)onGetQRCodeFail;
- (void)showPlayLiveWithoutLoginQRCode;
- (void)checkQRCodeStatusAfterGetQRCodeToken;
- (void).cxx_destruct;

@end
