@class NSString;

@interface AWESearchAIGCResultBaseViewController : AWESearchResultVerticalBaseViewController <AWERouterViewControllerProtocol, AWESearchAIGCPanelContentProtocol>

@property (nonatomic) double routerStartTs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ panel_closeBlock;
@property (copy, nonatomic) id /* block */ panel_closeBlockVertical;
@property (copy, nonatomic) id /* block */ panel_playVideoBlock;
@property (copy, nonatomic) id /* block */ panel_pauseVideoBlock;

+ (id)paramsProviders;
+ (Class)paramsContextClass;
+ (void)handleSearchKeywordChangeWithParams:(id)a0 vc:(id)a1;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)stopVoiceBroadcast;
- (void)foldKeyboard;
- (id)paramsContext;
- (void)closeKeyboard;
- (void)customHandleAIGCSendQuery:(id)a0 source:(id)a1 animated:(BOOL)a2 insertCompletion:(id /* block */)a3;
- (BOOL)isOriginalAnswerWithdrawnWithSearchID:(id)a0;
- (BOOL)isLastRealTimeRoundReceiveAllData:(id)a0;
- (void)shareBegin:(id)a0;
- (void)shareVideoWithSearchID:(id)a0 logParams:(id)a1;
- (BOOL)isLastRealTimeNode:(id)a0;
- (BOOL)isLastRealTimeLynxChatNode:(id)a0;
- (void)mediumPause;
- (void)handleLongPressFromAITabToVoiceMiddlePage:(id)a0 extraParams:(id)a1;
- (void)removeVoiceMiddlePage;
- (void)shareBegin:(id)a0 disablePublish:(BOOL)a1;
- (void)resetRouterParamDict:(id)a0 previousParams:(id)a1;
- (id)routerParamsDict;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
