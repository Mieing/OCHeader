@class NSString;

@interface AWESearchAIGCModuleService : NSObject <AWESearchAIGCBundleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (Class)getAWELeftSideBarAISearchPresenterClass;
- (BOOL)shouldPreventPlayWhenAIGCPanelShow:(id)a0;
- (Class)getAWESearchAIGCBubbleModelClass;
- (void)handleAIGCForLongPressWithGestureRecognizer:(id)a0 extraParams:(id)a1;
- (void)setAIGCSevenSplitScreenDelegate:(id)a0;
- (void)snapshotsOfWebView:(id)a0 atSegment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 byType:(unsigned long long)a2 completion:(id /* block */)a3;
- (Class)routerForResultViewControllerClass;
- (void)setAIGCRouterManagerAIGCResultVC:(id)a0;
- (id)aigcSchemeTransferCache;
- (id)aigcStreamDataManager;
- (id)readUnReadMsgForKey:(id)a0 markRead:(BOOL)a1;
- (id)aigcHistoryManager;
- (id)aigcImageUploadManager;
- (void)reportAIGCSummaryEntryAction:(long long)a0;
- (id)aigcInputServiceWithContainer:(id)a0;
- (Class)aigcSSERequestManagerClass;
- (id)aigcSSERequestManagerInstance;
- (id)aigcSSERequestManagerInstanceWithIsNormalMode:(BOOL)a0;
- (BOOL)addCommonParamsToExtraData:(id)a0;
- (id)createAIGCServiceWithContainer:(id)a0 config:(id)a1;
- (Class)getAIGCServiceClass;
- (BOOL)isAIBusinessCard:(id)a0;
- (id)getAWESearchVoiceInputMeterViewsWithMeterColor:(id)a0;
- (id)getAWESearchAIGCInputView;
- (id)getAWESearchAIGCInputBarWithContext:(id)a0;
- (id)getAWESearchAIGCSearchBarWithContext:(id)a0;
- (id)getAWESearchAIGCInputImageContainer;
- (id)getAWEAIOriginalViewControllerWithInputDataContext:(id)a0;
- (Class)getAWESearchAIGCResultBaseViewControllerClass;
- (Class)getAWEAIOriginalViewControllerClass;
- (BOOL)latestQueryHitSecurity;

@end
