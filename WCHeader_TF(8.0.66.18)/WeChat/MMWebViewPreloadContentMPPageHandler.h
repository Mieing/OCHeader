@class NSString, NSDictionary;

@interface MMWebViewPreloadContentMPPageHandler : NSObject <MPPageFastLoadMgrExt, MMWebViewPreloadContentHandler>

@property (copy, nonatomic) NSString *pageFrameUrl;
@property (nonatomic) unsigned int checkInterval;
@property (nonatomic) unsigned int templateType;
@property (nonatomic) unsigned int templateVersion;
@property (copy, nonatomic) NSString *templateFullVersion;
@property (copy, nonatomic) NSString *templateVersionGroup;
@property (copy, nonatomic) NSString *latestTemplateFullVersion;
@property (nonatomic) unsigned int templateReportId;
@property (nonatomic) BOOL isOfflineCache;
@property (copy, nonatomic) NSString *sourceUserName;
@property (copy, nonatomic) NSString *pageUrl;
@property (copy, nonatomic) NSString *pageDataKeyUrl;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int enterType;
@property (copy, nonatomic) id /* block */ pageDataUpdateBlock;
@property (copy, nonatomic) NSString *a8KeyFullUrl;
@property (copy, nonatomic) NSString *passTicket;
@property (retain, nonatomic) NSDictionary *requestHeaderDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParameter:(id)a0;
- (unsigned int)getPageTemplateType;
- (unsigned int)getPageTemplateVersion;
- (id)getPageTemplateFullVersion;
- (id)getLatestPageTemplateFullVersion;
- (id)getPageTemplateHttpHeader;
- (unsigned int)getPageCheckInterval;
- (unsigned int)getPageTemplateReportId;
- (id)pageFrameUrlString;
- (id)pageFrameHtmlString;
- (void)setupPageUrl:(id)a0 pageDataKeyUrl:(id)a1 scene:(unsigned int)a2 enterType:(unsigned int)a3 sourceUserName:(id)a4;
- (id)getPageForceUrl;
- (BOOL)getPageForceUrlFullScreenValidState;
- (unsigned int)getPageDataRequiredTemplateVersion;
- (id)pageDataString;
- (void)updatePageDataWithCompletion:(id /* block */)a0;
- (void)saveA8KeyInfoWithUrl:(id)a0 header:(id)a1;
- (void)onInjectPageDataNotifySuccessWithA8keyScene:(unsigned int)a0 useFlag:(unsigned long long)a1;
- (id)addSessoinQueryForRequestUrl:(id)a0;
- (unsigned long long)useFlagForIsUsePreCreateWebView:(BOOL)a0 isSyncGetPageData:(BOOL)a1;
- (id)addTemplateQueryForUrl:(id)a0 useFlag:(unsigned long long)a1;
- (id)requestSessionHeader;
- (void)setIsOfflineCache;
- (BOOL)getIsOfflineCache;
- (id)getPageDataKeyUrl;
- (unsigned int)getPageEnterType;
- (void)setupParamter:(id)a0;
- (void)onMPPageDataUpdate:(id)a0;
- (void)checkForceUrlWithCompletion:(id /* block */)a0;
- (void)deleteOfflineCache;
- (void).cxx_destruct;

@end
