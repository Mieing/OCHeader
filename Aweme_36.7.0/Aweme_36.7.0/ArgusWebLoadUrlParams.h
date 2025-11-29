@class BDXThreadSafeArray, NSString, NSDictionary, WKWebView, NSURL, NSURLRequest;

@interface ArgusWebLoadUrlParams : ArgusBaseAsepctParams

@property (retain, nonatomic) NSURLRequest *rewriteRequest;
@property (copy, nonatomic) NSString *rewriteUrl;
@property (retain, nonatomic) NSDictionary *rewriteHeaders;
@property (copy, nonatomic) NSString *verifySource;
@property (nonatomic) long long loadPageType;
@property (retain, nonatomic) BDXThreadSafeArray *webLoadVerifyRecord;
@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSURLRequest *request;
@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL isThird;
@property (nonatomic) BOOL isEntry;
@property (nonatomic) BOOL rewriteToHttps;
@property (nonatomic) BOOL hasReport;

+ (id)transformPageType:(long long)a0;
+ (id)transformSccType:(unsigned long long)a0;

- (id)toMonitorDict;
- (id)initWithUrlRequest:(id)a0;
- (void)updateRewriteRequest:(id)a0 rewriteHeaders:(id)a1;
- (void)updateWebLoadVerifyResult:(long long)a0 verifySource:(id)a1;
- (void).cxx_destruct;

@end
