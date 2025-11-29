@class NSString, LLDitoPageContext, UIViewController;

@interface LLDitoVirtualRefreshPageTask : NSObject

@property (weak, nonatomic) LLDitoPageContext *pageContext;
@property (copy, nonatomic) NSString *pageUrl;
@property (nonatomic) BOOL refreshPageWhenTimeOut;
@property (nonatomic) double timeOutDuration;
@property (nonatomic) BOOL showLoadingView;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL timeOut;
@property (nonatomic) long long resultFrom;
@property (retain, nonatomic) UIViewController *targetVC;
@property (nonatomic) double initialStartTime;
@property (nonatomic) double initialEndTime;
@property (nonatomic) double loadStartTime;
@property (nonatomic) double loadEndTime;
@property (nonatomic) double replaceStartTime;
@property (nonatomic) double replaceEndTime;

- (id)initWithPageContext:(id)a0;
- (void)runWithPageUrl:(id)a0 refreshPageWhenTimeOut:(BOOL)a1 timeOutDuration:(double)a2 showLoadingView:(BOOL)a3 callback:(id /* block */)a4;
- (void)pageDidLoadCompleteAction:(id)a0;
- (void)pageDidLoadFailureAction:(id)a0;
- (void)invokeCallbackWithCode:(long long)a0 msg:(id)a1;
- (void)pushTargetPageToNavigationStack;
- (id)metricsData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end
