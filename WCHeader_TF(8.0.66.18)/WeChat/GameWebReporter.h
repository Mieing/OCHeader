@class NSMutableDictionary, NSDictionary, NSString, MMWebViewController, GameWebViewTimeRecord;

@interface GameWebReporter : MMObject {
    GameWebViewTimeRecord *_webViewTimeRecord;
    MMWebViewController *_webViewController;
    NSString *_url;
    NSString *_pageKey;
    NSString *_wepkgVersion;
    NSString *_jsCommonLibVersion;
    unsigned long long _renderFinsihTimestampMills;
    BOOL _isManualLoad;
    BOOL _isPageCache;
    BOOL _hasReportFinish;
    BOOL _hasAppeared;
    BOOL _hasReportClosed;
}

@property (retain, nonatomic) NSMutableDictionary *webItems16142;
@property (retain, nonatomic) NSDictionary *webTimingDic;
@property (nonatomic) unsigned long long pageCloseTime;
@property (nonatomic) BOOL isRealtime16142;
@property (nonatomic) BOOL isPreloadWhemInvisibile;
@property (nonatomic) BOOL hasShow;
@property (nonatomic) unsigned long long gameWkInnterceptMethod;

+ (id)createWithWebView:(id)a0 andUrl:(id)a1;

- (id)webView;
- (id)initWithWebView:(id)a0 andUrl:(id)a1;
- (void)setWepkgVersion:(id)a0;
- (void)setJsCommonLibVersion:(id)a0;
- (void)setManualLoad:(BOOL)a0;
- (void)setPageCache:(BOOL)a0;
- (void)notifyWebViewCreate;
- (void)notifyWebViewDidCreated;
- (void)notifyWebViewDidAppear;
- (void)notifyWebViewWillLoad;
- (void)notifyWebViewDidStartLoad;
- (void)notifyWebViewDidFinishLoad;
- (void)notifyWebViewLoadError:(long long)a0;
- (void)notifyRenderFinished:(unsigned long long)a0;
- (void)notifyWebViewClosed;
- (void)notifyWebViewA8KeyStarted;
- (void)notifyWebViewA8KeyFinished;
- (void)notifyWebViewPreverifyStarted;
- (void)notifyWebViewPreverifyFinished;
- (void)notifyWebViewDealloc;
- (void)report16142;
- (void)commitGameWebData:(id)a0 Type:(id)a1 Realtime:(BOOL)a2;
- (unsigned long long)pageStartTime;
- (void)saveReport16142:(id)a0 realTime:(BOOL)a1;
- (void)report16145:(id)a0 realTime:(BOOL)a1;
- (void)reportWithItems:(id)a0 toProtoNumber:(int)a1 realTime:(BOOL)a2;
- (void)appendParams:(id)a0 toReportItems:(id)a1;
- (int)searchInsertPositionInItem:(id)a0 ForOrder:(int)a1 current:(int)a2;
- (void)assembleLocalItems:(id)a0 lessFields:(BOOL)a1 completionBlock:(id /* block */)a2;
- (id)extractWebDurationWithStartKey:(id)a0 endKey:(id)a1;
- (id)networkTypeString;
- (void)setUserClickTime:(unsigned long long)a0;
- (void).cxx_destruct;

@end
