@class MMUIViewController, UIView, NSString, SearchCgiGuideConfig, WSWebViewPluginScheduler, NSMutableArray, MMUILabel, WSLocalTemplateController;
@protocol SearchGuideViewDelegate;

@interface WSHotListContainerView : UIView <ISearchConfigDataExt, WeChat.WSWebViewExceptionHandlerDelegate, WSWebViewPluginableProtocol, WSHotListTeachView>

@property (retain, nonatomic) WSLocalTemplateController *webviewController;
@property (retain, nonatomic) NSMutableArray *arrEntryDatas;
@property (retain, nonatomic) NSMutableArray *arrButtons;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) SearchCgiGuideConfig *vertInfo;
@property (nonatomic) long long searchSessionID;
@property (nonatomic) BOOL enableSendViewAppearJSEvent;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (weak, nonatomic) id<SearchGuideViewDelegate> delegate;
@property (retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler;
@property (nonatomic) BOOL isVisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

+ (id)getPreloadInstance;
+ (void)removeCache;

- (void)tryRecycleSelf;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initWebview;
- (void)observeViewVisableStatus;
- (void)showContentViewAnimated:(BOOL)a0;
- (void)hideContentViewAnimated;
- (void)onTapButton:(id)a0;
- (void)layoutSubviews;
- (void)showDynamicViewAnimated:(BOOL)a0;
- (void)onPopOrDismissed;
- (void)onViewAppear;
- (id)webview;
- (void)initPluginScheduler;
- (void)sendOnUiInit;
- (void)reloadView;
- (void)onSearchConfigDataFailToUpdate;
- (void)onSearchConfigDataUpdated;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (unsigned long long)localJSBizType;
- (void)reloadWebview;
- (void).cxx_destruct;

@end
