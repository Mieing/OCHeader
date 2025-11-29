@class WKWebView, NSString, FavoritesItem, FavWebCacheContext, FavWebCacheScriptMessageHandler, FavWebCacheDownloadFileInfo, NSMutableSet, NSMutableArray, NSMutableCharacterSet, MMTimer;

@interface FavWebCacheMgr : MMUserService <WKNavigationDelegate, WKScriptMessageHandler, INetworkStatusMgrExt, IFavoritesExt, MMServiceProtocol> {
    WKWebView *m_webView;
    NSMutableArray *m_loadingQueue;
    MMTimer *m_cacheWatchDog;
    BOOL m_bUpdate;
    BOOL m_webviewEnable;
    BOOL m_htmlLoadComplete;
    BOOL m_ajaxInjectComplete;
    NSMutableSet *m_processKeys;
    NSMutableCharacterSet *m_urlCharacterSet;
    NSString *m_userAgent;
    BOOL m_bLoading;
    unsigned int m_cacheSize;
    unsigned int m_cacheFileNum;
    unsigned long long m_totalCacheSize;
    NSMutableSet *m_currentDowloadFiles;
    FavWebCacheDownloadFileInfo *m_downloadFileInfo;
    FavoritesItem *m_currentItem;
    FavWebCacheContext *m_cacheContext;
    FavWebCacheScriptMessageHandler *m_scriptMessageHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initWebView;
- (void)loadOldWebFavItem:(id)a0;
- (id)genProcessKey;
- (BOOL)checkKey:(id)a0;
- (BOOL)webCacheEnableWithFavItem:(id)a0;
- (void)updateWebCacheForItem:(id)a0 WithContext:(id)a1 HtmlAndFileUrlResult:(id)a2;
- (void)deleteWebCacheForItem:(id)a0;
- (void)cleanCache;
- (void)cacheWebFavItem:(id)a0;
- (void)cacheWebFavItem:(id)a0 needClear:(BOOL)a1;
- (void)setCacheStatusForItem:(id)a0;
- (void)startCacheWeb;
- (void)cancelCacheWeb;
- (void)checkTotalCacheSize;
- (void)resetCacheWeb;
- (void)webCacheFinish:(BOOL)a0;
- (void)reportCacheResult:(BOOL)a0;
- (BOOL)saveWebData:(id)a0 mimeType:(id)a1 url:(id)a2;
- (void)saveData:(id)a0 atPath:(id)a1;
- (void)startCacheWebContent;
- (BOOL)processHtmlContentAndFileUrlResult:(id)a0 baseUrl:(id)a1;
- (BOOL)processSources:(id)a0 isMedia:(BOOL)a1 inContent:(id)a2 withBaseUrl:(id)a3;
- (id)getUrlof:(id)a0 baseUrl:(id)a1;
- (id)checkCssUrlIn:(id)a0;
- (BOOL)storeHtmlFile;
- (id)genHeadScript;
- (id)protectString:(id)a0;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })stringReplace:(const void *)a0 src:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a1 des:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a2;
- (void)replaceResourceAddr:(id)a0 with:(id)a1 inContent:(id)a2;
- (void)startDownloadFiles;
- (void)webviewDownload:(id)a0;
- (void)cancelWebDownload;
- (void)urlSessionDownload:(id)a0;
- (void)processDownloadData:(id)a0 mimeType:(id)a1 url:(id)a2;
- (void)downloadFinish:(id)a0;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)OnAddNewFavoritesItems:(id)a0;
- (void).cxx_destruct;

@end
