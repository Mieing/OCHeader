@class BDXContext, NSDictionary, NSString, UIView;
@protocol AWESearchCachalotWebErrorReloadViewProtocol, AWESearchCachalotWebLoadingViewProtocol, BDXViewContainerProtocol;

@interface AWESearchCachalotWebConfig : NSObject <NSCopying>

@property (nonatomic) BOOL enableCardFullScreen;
@property (nonatomic) BOOL forbiddenWebScroll;
@property (nonatomic) BOOL supportLoadingView;
@property (retain, nonatomic) UIView<AWESearchCachalotWebLoadingViewProtocol> *customLoadingView;
@property (nonatomic) BOOL supportErrorReloadView;
@property (retain, nonatomic) UIView<AWESearchCachalotWebErrorReloadViewProtocol> *customErrorReloadView;
@property (nonatomic) BOOL forbiddenScriberBdxWebviewEvent;
@property (nonatomic) BOOL enableWebPreloadInHandleNode;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *customWebView;
@property (retain, nonatomic) BDXContext *customWebContext;
@property (nonatomic) BOOL supportByteSync;
@property (nonatomic) BOOL enableWebViewReuse;
@property (nonatomic) BOOL disableUnSubscribeEvent;
@property (nonatomic) BOOL enableWebPreload;
@property (nonatomic) BOOL enableSSE;
@property (nonatomic) BOOL enableMultiCard;
@property (nonatomic) BOOL enableEventOptimize;
@property (copy, nonatomic) NSDictionary *customExtraData;
@property (nonatomic) BOOL shouldResizeCardOnReload;
@property (nonatomic) BOOL enableTimeout;
@property (copy, nonatomic) id /* block */ trackLoadSuccessHandler;
@property (copy, nonatomic) id /* block */ trackLoadFailedHandler;
@property (nonatomic) BOOL shouldMergeCommonParamsIntoRawData;
@property (nonatomic) BOOL shouldNotUpdateLogDataFromRawData;
@property (nonatomic) BOOL disableUnregisterSubscriberAtDisappear;
@property (nonatomic) BOOL enableWebViewResignFirstResponderAtDrag;
@property (nonatomic) double webViewHorizontalMargin;
@property (copy, nonatomic) NSString *searchScene;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
