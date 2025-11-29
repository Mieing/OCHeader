@class MMWebPrefetchInjectTaskRequest, NSObject;
@protocol OS_dispatch_queue;

@interface MMWebPrefetchInjectTask : MMObject

@property (retain, nonatomic) MMWebPrefetchInjectTaskRequest *request;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerThread;
@property (nonatomic) BOOL isCancel;

- (id)initWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)start;
- (void)cancel;
- (id)genResNameMapDict:(id)a0;
- (id)getMapedResNameWithFullSrc:(id)a0 resNameMapDict:(id)a1;
- (BOOL)injectPrefetchPkg:(id *)a0;
- (id)generateValidPkgResInfoWithTagInfo:(id)a0 basePkgInfo:(id)a1 mapedResName:(id)a2;
- (BOOL)injectPrefetchResToHTML:(id *)a0;
- (id)extractAllExternalScriptTagFromHtmlString:(id)a0;
- (id)arrAttrForScriptTag:(id)a0;
- (BOOL)shouldIgnoreScriptWithAttrArr:(id)a0;
- (BOOL)checkScriptTagContainDefer:(id)a0;
- (id)extractAllExternalLinkTagFromHtmlString:(id)a0;
- (id)replaceJsExternalTag:(id)a0 withNewTagResUrl:(id)a1 withHtmlString:(id)a2 success:(BOOL *)a3;
- (id)replaceJsExternalTag:(id)a0 withJsContent:(id)a1 withHtmlString:(id)a2 withAttrArr:(id)a3 success:(BOOL *)a4;
- (id)replaceCssExternalTag:(id)a0 withNewTagResUrl:(id)a1 withHtmlString:(id)a2 success:(BOOL *)a3;
- (id)replaceCssExternalTag:(id)a0 withContent:(id)a1 withHtmlString:(id)a2 success:(BOOL *)a3;
- (void)updateHeaderFieldWithDomain:(id)a0 identifier:(id)a1 prefetchOption:(unsigned int)a2 updateDateTime:(unsigned int)a3;
- (id)completeRelativeUrlIfNeed:(id)a0 withBaseUrl:(id)a1;
- (id)fileContentWithUrl:(id)a0;
- (id)valueForAttribute:(id)a0 withHtmlTag:(id)a1;
- (id)errorWithCode:(long long)a0 description:(id)a1;
- (void).cxx_destruct;

@end
