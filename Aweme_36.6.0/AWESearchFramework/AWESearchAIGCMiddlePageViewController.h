@interface AWESearchAIGCMiddlePageViewController : AWESearchResultVerticalBaseViewController

@property (nonatomic) BOOL isPadSplitting;

+ (void)preprocessModel:(id)a0;

- (id)tabConfig;
- (void)addGesture;
- (id)lynxRawDataParams;
- (void)foldKeyboard;
- (id)customContainerConfig;
- (BOOL)customUseSerialOperationMode;
- (BOOL)customDisablePadSideBorder;
- (BOOL)customShouldTurnOnAutoPreloadMoreWhenEndRefreshingCompleted;
- (BOOL)enableSearchAIPadStyle;
- (BOOL)enableSearchAIPadLayout;
- (id)footerView;
- (void)viewDidLoad;
- (void)scrollToBottom;

@end
