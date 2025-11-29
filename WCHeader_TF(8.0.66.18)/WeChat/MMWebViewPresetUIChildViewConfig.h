@protocol MMWebViewPresetUIChildViewDelegate;

@interface MMWebViewPresetUIChildViewConfig : MMObject

@property (nonatomic) BOOL isShowProgress;
@property (nonatomic) BOOL isAccessAllJsApiInvocation;
@property (weak, nonatomic) id<MMWebViewPresetUIChildViewDelegate> delegate;
@property (nonatomic) BOOL isAllowWebviewLongPressGesture;
@property (nonatomic) BOOL disableNavigationErrorView;
@property (nonatomic) BOOL isWebviewHandleTopBarEvent;
@property (nonatomic) BOOL disableFixWebviewY;
@property (nonatomic) BOOL forbidSetTailBgView;
@property (nonatomic) BOOL useDefaultTitleAndSubTitleHost;
@property (nonatomic) BOOL useBottomBar;

- (void).cxx_destruct;

@end
