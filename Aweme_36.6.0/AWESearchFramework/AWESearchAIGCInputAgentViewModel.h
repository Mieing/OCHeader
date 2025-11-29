@class NSArray, AWESearchAIGCInputAgentModel, NSString;
@protocol AWESearchAIGCInputAgentViewModelDelegate;

@interface AWESearchAIGCInputAgentViewModel : NSObject <AWESearchAIGCInputAgentAction>

@property (retain, nonatomic) NSArray *cacheAgentListList;
@property (retain, nonatomic) AWESearchAIGCInputAgentModel *videoRSAgent;
@property (readonly, copy, nonatomic) NSArray *agentList;
@property (weak, nonatomic) id<AWESearchAIGCInputAgentViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)inputAgentIsEmpty;
- (void)inputAgentRefreshWithVideoID:(id)a0 conversationID:(id)a1;
- (void)inputAgentRefreshLocalData;
- (id)getCacheAgentModelList;
- (void)refreshCacheAgentModelList;
- (void)setCacheAgentModelList:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
