@class NSString, TCAPIRequest, TencentRequest;
@protocol APIBaseDelegate;

@interface APIBase : NSObject <TencentRequestDelegate> {
    TencentRequest *_request;
}

@property (copy, nonatomic) NSString *httpMethod;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) int seq;
@property (weak, nonatomic) id<APIBaseDelegate> delegate;
@property (retain, nonatomic) id userData;
@property (retain, nonatomic) TCAPIRequest *cgiRequest;
@property (nonatomic) BOOL allowProgress;
@property (nonatomic) int needTriedCounts;
@property (nonatomic) int hasTriedCounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)getApiBaseSeq;

- (void)request:(id)a0 didReceiveResponse:(id)a1;
- (id)parsePermissionFromURL:(id)a0;
- (void)request:(id)a0 didLoad:(id)a1 dat:(id)a2;
- (void)request:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)request:(id)a0 didWriteData:(long long)a1 totalBytesWritten:(long long)a2 expectedTotalBytes:(long long)a3;
- (id)initWithTarget:(id)a0 andSelector:(SEL)a1 andHttpMethod:(id)a2 andUserData:(id)a3;
- (id)initWithTarget:(id)a0 andSelector:(SEL)a1 andHttpMethod:(id)a2 andAPIBaseDelegate:(id)a3 andUserData:(id)a4;
- (id)openUrl:(id)a0 token:(id)a1 openid:(id)a2 appid:(id)a3 params:(id)a4;
- (id)openUrlBySkey:(id)a0 skey:(id)a1 uin:(id)a2 appid:(id)a3 params:(id)a4;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end
