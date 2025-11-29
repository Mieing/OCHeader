@protocol AWESearchAIGCDynamicEventManagerDelegate;

@interface AWESearchAIGCDynamicEventManager : NSObject

@property (weak, nonatomic) id<AWESearchAIGCDynamicEventManagerDelegate> delegate;

- (void)subscribeEventWithDynamicEngine:(id)a0;
- (id)handleReAnswerMethodWithParams:(id)a0;
- (id)handleCopyContentReadyWithParams:(id)a0;
- (id)handleCopyTextWithParams:(id)a0 cert:(id)a1;
- (id)handleOpenAIGCKeyBoard:(id)a0;
- (id)handleSidebarGlobalVoiceBroadcast:(id)a0;
- (id)handleOpenThinkDetailWithParams:(id)a0;
- (id)handleSidebarSelectHistory:(id)a0;
- (id)handleSidebarDeleteSingleHistory:(id)a0;
- (id)handleDoAISearchAction:(id)a0;
- (id)handleGetExistedStreamContentWithParams:(id)a0;
- (void)handleSearchKeywordChangeWithParams:(id)a0;
- (id)handleExperienceOfflineCardScrollWithParams:(id)a0;
- (void).cxx_destruct;

@end
