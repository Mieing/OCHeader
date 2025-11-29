@class NSString, MMTimer, NSData, WCCgiBlockHelper, MMWebViewController;
@protocol CheckQRCodeLoginDelegate;

@interface CheckQRCodeLoginCGI : NSObject <MessageObserverDelegate, MMWebViewDelegate>

@property (nonatomic) unsigned int m_checkTime;
@property (retain, nonatomic) NSString *m_uuid;
@property (retain, nonatomic) NSData *m_notifyKey;
@property (retain, nonatomic) MMTimer *m_timer;
@property (retain, nonatomic) WCCgiBlockHelper *checkLoginQRCodeCgiHelper;
@property (weak, nonatomic) MMWebViewController *authUrlWebView;
@property (weak, nonatomic) id<CheckQRCodeLoginDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)StartCheckQRCodeWithTime:(unsigned int)a0 uuid:(id)a1 notifyKey:(id)a2;
- (void)StopCheckQRCode;
- (void)internalStopCheckQRCode;
- (void)clearData;
- (BOOL)isDataValid;
- (void)resetCheckTimer;
- (void)stopCheckTimer;
- (void)stopRequest;
- (void)handleNotifyData:(id)a0;
- (void)handleNotifyStatus:(unsigned int)a0 userName:(id)a1 nickName:(id)a2 pwd:(id)a3 headImageURL:(id)a4 authUrl:(id)a5;
- (void)sendCheckQRCodeRequest;
- (void)handleOpenAuthUrl:(id)a0;
- (void)changeCheckQrcodeStatePaused:(BOOL)a0;
- (void)handleResponse:(id)a0;
- (void)checkLoginQRCodeFailed;
- (void)checkLoginQRCodeCancel;
- (void)webViewDidReturn:(id)a0;
- (void)onWebViewCloseAndGoNext:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)MessageReturn:(unsigned int)a0 MessageInfo:(id)a1 Event:(unsigned int)a2;
- (void).cxx_destruct;

@end
