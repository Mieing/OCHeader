@class UIView, NSString, NSMutableDictionary, APBAuthEngine, APBToygerBioBisConfigManager, DTFLogMonitor, UIViewController, ZimRpcManager, UIActivityIndicatorView;
@protocol ZimVerifyFactorDelegate;

@interface ZimVerifyFactor : NSObject {
    NSString *_zimId;
    BOOL _keepUploadingView;
    BOOL _isFastInit;
    UIActivityIndicatorView *_progressView;
    UIView *_backGroundView;
}

@property (retain, nonatomic) DTFLogMonitor *monitor;
@property (retain, nonatomic) ZimRpcManager *rpcManager;
@property (retain, nonatomic) APBAuthEngine *bioAuthEngine;
@property (retain, nonatomic) NSMutableDictionary *extInfo;
@property (retain, nonatomic) UIViewController *rootVC;
@property (retain, nonatomic) NSMutableDictionary *responseExtInfo;
@property (nonatomic) unsigned long long factorSatus;
@property (retain, nonatomic) NSString *idString;
@property (retain, nonatomic) NSString *nameString;
@property (retain, nonatomic) APBToygerBioBisConfigManager *protocolModel;
@property (weak, nonatomic) id<ZimVerifyFactorDelegate> delegate;
@property (retain, nonatomic) id rpcProxy;

+ (id)getRDataContent:(long long)a0 withExtInfo:(id)a1;

- (id)initWithrpcProxy:(id)a0;
- (void)setZimId:(id)a0 andExtInfo:(id)a1;
- (void)quit:(id)a0;
- (void)startStandardVerify;
- (void)startFastUploadVerify;
- (void)startFastInitFastUploadVerify;
- (void)handleInitResponseStatus:(id)a0 andDetail:(id)a1;
- (void)logInitResponse:(id)a0 result:(id)a1;
- (void)startBioAuthVerifywithProtocol:(id)a0 andExtInfo:(id)a1;
- (void)sendEKYCOCConfirmRequestWithInfo:(id)a0;
- (void)sendEKYCOCRRequestWithInfo:(id)a0;
- (void)sendValidateRequestWithInfo:(id)a0;
- (void)handleValidateStatus:(id)a0 result:(id)a1 andisNeedCallback:(BOOL)a2 andCurrentRetryCnt:(id)a3;
- (void)quitVerifyWithReason:(id)a0 response:(unsigned long long)a1 retMessageSub:(id)a2 retCodeSub:(id)a3 andBioResultType:(int)a4;
- (void)start2FA:(id)a0 completion:(id /* block */)a1;
- (void)quitBioAuthEngineWithblock:(id /* block */)a0;
- (void)quitBioAuthEngineAfterVerifywithParams:(id)a0 andResponse:(id)a1;
- (void)quitVerifyWith:(id)a0;
- (BOOL)fileExist:(id)a0;
- (BOOL)needRemoteDownload;
- (void).cxx_destruct;

@end
