@class NSString, NSMutableArray, NSMutableOrderedSet;

@interface AWEStory25DraftStatusManager : NSObject <AWEPublishTaskMessage, AWEUserMessage, AWEStory25DraftStatusManagerProtocol>

@property (retain, nonatomic) NSMutableArray *subTaskUUIDs;
@property (retain, nonatomic) NSMutableOrderedSet *publishedItemIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)publishedItemIDArray;
- (void)markDraftAsReadForSubTaskUUID:(id)a0;
- (void)onAwemeDeleteNoti:(id)a0;
- (id)fetchAllMultiSplitSubTasksFromTask:(id)a0;
- (id)constructDraftRingModelsForTask:(id)a0;
- (id)constructSubTaskUUIDToItemIdMapFromTask:(id)a0;
- (void)recordItemIdForTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
