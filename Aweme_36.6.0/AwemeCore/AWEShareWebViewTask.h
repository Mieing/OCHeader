@interface AWEShareWebViewTask : AWEShareCommonTask

@property (nonatomic) BOOL needsUserInfo;
@property (nonatomic) BOOL shouldShowShare;

+ (void)parseTitleInWebView:(id)a0 completion:(id /* block */)a1;
+ (void)prepareTaskWithWebView:(id)a0 model:(id)a1 completion:(id /* block */)a2;
+ (void)finishPreparingTask:(id)a0 withModel:(id)a1;
+ (void)prepareContextWithWebView:(id)a0 model:(id)a1 completion:(id /* block */)a2;
+ (id)contextWithWebViewModel:(id)a0;
+ (void)parseWebMetadataInWebView:(id)a0 completion:(id /* block */)a1;
+ (id)webViewShareURLByRemovingUserInfoFromURL:(id)a0;
+ (id)webViewShareURLByAddingUserInfoToURL:(id)a0 shareType:(id)a1;
+ (id)statsShareWebViewStage;
+ (id)prepareShareWebViewModelStageNeedsUserInfo:(BOOL)a0;

@end
