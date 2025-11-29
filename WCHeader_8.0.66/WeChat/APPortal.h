@class PublicWifiCache, NSString, NSURLConnection, UIViewController;
@protocol APProtalDelegate;

@interface APPortal : APBase <NSURLConnectionDelegate, PBMessageObserverDelegate> {
    NSString *ticket;
    NSString *authUrl;
    NSString *extend;
}

@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) NSURLConnection *postConnection;
@property (retain, nonatomic) NSURLConnection *ping32BlackUrlConnection;
@property (nonatomic) int retryCount;
@property (retain, nonatomic) PublicWifiCache *acache;
@property (weak, nonatomic) id<APProtalDelegate> delegate;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *openid;
@property (copy, nonatomic) NSString *appid;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)cancel;
- (void)didStart;
- (void)didSuccess;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;

@end
