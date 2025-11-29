@class NSString;
@protocol AWEFeedTagsPosPriorityAvoidElementProtocol;

@interface AWEFeedTagsPriorityManager : NSObject <AWEFeedTagsPriorityManagerProtocol>

@property (weak, nonatomic) id<AWEFeedTagsPosPriorityAvoidElementProtocol> currentShownElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)insertPriorityDict;
+ (long long)getPriorityWithBusinessStr:(id)a0;
+ (id)staticPriorityDict;
+ (id)priorityDictForOriginLabels;
+ (long long)getInsertPriorityWithBusinessStr:(id)a0;

- (id)currentShowElement;
- (void)tagsPositionElementFilter:(id)a0 awemeModel:(id)a1;
- (BOOL)priorityCompare:(id)a0 requestPriority:(long long)a1;
- (BOOL)tryReplaceCurrentShownElement:(id)a0;
- (BOOL)canUpdateTagsWithBusinessID:(id)a0;
- (BOOL)tryUpdateTagsWithBusinessID:(id)a0 requestElement:(id)a1;
- (BOOL)tryReplaceCurrentShownElementForTagElement:(id)a0 businessStr:(id)a1 didAppear:(BOOL)a2;
- (void)forceReplaceCurrentShownElement:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
