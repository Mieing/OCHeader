@class NSString, NSDictionary, NSURL, CJPayWebviewStyle;

@interface CJPayAnnieContext : NSObject

@property (copy, nonatomic) NSString *originalUrlStr;
@property (copy, nonatomic) NSString *originUrl;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *customUserAgent;
@property (retain, nonatomic) CJPayWebviewStyle *webviewStyle;
@property (nonatomic) BOOL isShowShareButton;
@property (copy, nonatomic) id /* block */ ttcjpayLifeCycleBlock;
@property (copy, nonatomic) NSDictionary *dataSentByH5;
@property (copy, nonatomic) NSString *shareBtnColor;
@property (copy, nonatomic) NSDictionary *shareParam;
@property (nonatomic) BOOL keepOriginalQuery;
@property (nonatomic) BOOL isShowNewUIStyle;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *returnUrl;
@property (copy, nonatomic) id /* block */ closeCallBack;
@property (nonatomic) BOOL isSaasEnv;
@property (nonatomic) double initTime;
@property (nonatomic) BOOL broadcastDomContentLoaded;
@property (copy, nonatomic) NSString *sessionId;

- (BOOL)isPopup;
- (BOOL)isBank;
- (BOOL)isCaijingSaasEnv;
- (BOOL)isBankProtocolType;
- (void).cxx_destruct;

@end
