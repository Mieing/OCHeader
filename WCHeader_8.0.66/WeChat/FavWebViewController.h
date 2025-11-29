@class NSString, FavoritesItem, FavWebCacheContext, NSDictionary, FavWebCacheScriptMessageHandler, FavDataItemWrap;

@interface FavWebViewController : MMWebViewController <WKScriptMessageHandler> {
    FavoritesItem *m_favItem;
    FavDataItemWrap *m_favDataItemWrap;
    unsigned int m_dataFavId;
    BOOL m_hasAddHandler;
    BOOL m_hasCached;
    BOOL m_hasLoaded;
    FavWebCacheContext *m_cacheContext;
    NSDictionary *m_htmlAndFileUrlResult;
    FavWebCacheScriptMessageHandler *m_scriptMessageHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavoritesItem:(id)a0;
- (id)initWithFavDataWrap:(id)a0;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)onWebViewDelete;
- (void)onWebViewEditTag;
- (void)webViewDidStartLoad:(id)a0 navigation:(id)a1;
- (void)webViewDidFinishLoad:(id)a0 navigation:(id)a1;
- (void)cacheWebContent;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)OnUploadFavoritesItemFinish:(id)a0 ErrCode:(int)a1;
- (void).cxx_destruct;

@end
