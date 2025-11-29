@class NSData, NSString, NSURL, NSURLSession, NSArray, BankCardOcrEncryptData, NSMutableData, NSMutableURLRequest, OcrGetBankCardInfoWechatRegResp;
@protocol WCPayBizeOcrImageHttpDegelate;

@interface WCPayBizOcrImageHttp : NSObject <NSURLSessionDelegate> {
    NSString *TAG;
}

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSMutableURLRequest *request;
@property (copy, nonatomic) NSString *sessionKey;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int seqNum;
@property (retain, nonatomic) NSURL *httpUrl;
@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSData *certPem;
@property (retain, nonatomic) NSString *baseRequest;
@property (retain, nonatomic) NSMutableData *responseData;
@property (copy, nonatomic) NSArray *sm2Key;
@property (copy, nonatomic) OcrGetBankCardInfoWechatRegResp *processResponse;
@property (copy, nonatomic) BankCardOcrEncryptData *bankcard_res;
@property (weak, nonatomic) id<WCPayBizeOcrImageHttpDegelate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0 delegate:(id)a1 source:(unsigned int)a2 seqNum:(unsigned int)a3 sessionKey:(id)a4 certPem:(id)a5 baseRequest:(id)a6;
- (void)onServiceInit;
- (void)start;
- (id)getSM2Encrpt;
- (void).cxx_destruct;

@end
