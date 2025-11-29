@class NSString, NSTimer, NSData, NSMutableData, NSURLConnection;
@protocol WechatAuthAPIDelegate;

@interface WechatAuthSDK : NSObject

@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) NSMutableData *respData;
@property (nonatomic) unsigned int retContentLength;
@property (nonatomic) unsigned int status;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSData *qrCodeData;
@property (copy, nonatomic) NSString *authCode;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isAuthing;
@property (nonatomic) long long httpRetStatusCode;
@property (nonatomic) long long lastState;
@property (weak, nonatomic) id<WechatAuthAPIDelegate> delegate;
@property (readonly, nonatomic) NSString *sdkVersion;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)_flex_swizzle_940fd0de_connection:(id)a0 didFailWithError:(id)a1;
- (void)_flex_swizzle_2e2b1f1e_connectionDidFinishLoading:(id)a0;
- (void)_flex_swizzle_28637340_connection:(id)a0 didReceiveResponse:(id)a1;
- (void)_flex_swizzle_b78e4f0e_connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)stopTimeoutCheck;
- (BOOL)sendAuthRequest:(id)a0;
- (void)handleGotQrcode;
- (void)startTimeoutCheck;
- (BOOL)Auth:(id)a0 nonceStr:(id)a1 timeStamp:(id)a2 scope:(id)a3 signature:(id)a4 schemeData:(id)a5;
- (BOOL)StopAuth;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)resetAll;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)handleResponse:(id)a0;
- (void)resetConnection;
- (id)init;
- (void)handleError:(int)a0;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)startPolling;

@end
