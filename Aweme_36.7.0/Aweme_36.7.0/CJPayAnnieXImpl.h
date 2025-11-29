@class NSString;

@interface CJPayAnnieXImpl : NSObject <CJPayAnnieXInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bindToProtocol;
+ (id)sharedInstance;

- (void)handleViewDidAppear:(id)a0;
- (void)handleViewDidDisappear:(id)a0;
- (id)originURLWithContainer:(id)a0;
- (void)closeContainer:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)isAnnieXContainer:(id)a0;
- (BOOL)isAnnieXPageContainer:(id)a0;
- (BOOL)isAnnieXPopupContainer:(id)a0;
- (BOOL)isCJPayAnnieXContainer:(id)a0;
- (id)cjpayAnnieContextWithContainer:(id)a0;
- (void)updateTitle:(id)a0 forContainer:(id)a1;
- (BOOL)close:(id)a0 forContainer:(id)a1;
- (BOOL)close:(id)a0 completion:(id /* block */)a1 forContainer:(id)a2;
- (void)sendEvent:(id)a0 params:(id)a1 forContainer:(id)a2;
- (BOOL)shouldPageInternalBackForContainer:(id)a0;
- (void)goBackForContainer:(id)a0;
- (void)disableSwipInteractivePopeGesture:(BOOL)a0 forContainer:(id)a1;
- (BOOL)close:(id)a0 animated:(BOOL)a1 forContainer:(id)a2;
- (BOOL)close:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2 forContainer:(id)a3;
- (id)createAnnieXLynxCardWithScheme:(id)a0 bid:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 initialDataStr:(id)a3 delegate:(id)a4 containersArray:(id)a5 uiConfig:(id)a6;
- (BOOL)tryLoadAnnieXView:(id)a0;
- (BOOL)isAnnieXView:(id)a0;
- (id)annieXViewContainerID:(id)a0;
- (id)annieXViewSchema:(id)a0;
- (id)createGurdMetaDataObject;
- (void)setGurdFalconData:(id)a0 forMetaData:(id)a1;
- (void)setGurdAllHeaderFields:(id)a0 forMetaData:(id)a1;
- (id)getGurdFalconDataFromMetaData:(id)a0;
- (void)preloadLynxResourceWithURL:(id)a0 callback:(id /* block */)a1;
- (id /* block */)createCardBuilderBlockWithScheme:(id)a0 dataStr:(id)a1 uiConfig:(id)a2;

@end
