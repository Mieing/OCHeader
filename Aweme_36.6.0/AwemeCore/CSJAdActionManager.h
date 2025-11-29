@interface CSJAdActionManager : NSObject

+ (void)gotoDetailPage:(id)a0 context:(id)a1 isSplash:(BOOL)a2;
+ (void)gotoSplashDetailPage:(id)a0 context:(id)a1;
+ (void)gotoDetailPage:(id)a0 context:(id)a1;
+ (id)sharedManager;

- (void)_trackLiveAdCustomActionResult:(id)a0 meta:(id)a1 context:(id)a2;
- (id)_genLiveAdCustomActionModelWithMeta:(id)a0 context:(id)a1;
- (id)_urlStringFromParameters:(id)a0;
- (void)pbu_reportClickUrlWithData:(id)a0;
- (void)pbu_preProccessWithModel:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)bu_splashHandleWebPageActionWithModel:(id)a0 context:(id)a1;
- (BOOL)tryLiveAdCustomActionWithModel:(id)a0 context:(id)a1;
- (void)bu_handelCallActionWithModel:(id)a0 withIsWebPage:(BOOL)a1 context:(id)a2;
- (void)bu_openUrlString:(id)a0 context:(id)a1;
- (void)bu_handelCallActionWithModel:(id)a0 context:(id)a1;
- (void)bu_handleVideoAdActionWithModel:(id)a0 context:(id)a1;
- (void)bu_handleAppActionWithModel:(id)a0 context:(id)a1 withDownloadActionType:(id /* block */)a2 withSucessCallBack:(id /* block */)a3 withFailedCallback:(id /* block */)a4;
- (void)bu_handleWebPageActionWithModel:(id)a0 context:(id)a1;
- (void)bu_handleSafariActionWithModel:(id)a0 context:(id)a1;
- (void)bu_openPolicy:(id)a0 context:(id)a1;

@end
