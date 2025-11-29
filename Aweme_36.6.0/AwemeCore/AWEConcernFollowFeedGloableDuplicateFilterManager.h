@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEConcernFollowFeedGloableDuplicateFilterManager : NSObject <AWEUserMessage, AWEConcernFollowFeedGloableDuplicateFilterManagerProtocol>

@property (retain, nonatomic) NSMutableArray *viewedNotFollowFeedCache;
@property (retain, nonatomic) NSMutableDictionary *viewedNotFollowFeedReferStringCache;
@property (retain, nonatomic) NSMutableArray *duplicateDeleteArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)videoPlay:(id)a0;
+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)arrayWithResponse:(id)a0 awemeList:(id)a1;
- (void)clearDuplicateDeleteItems;
- (BOOL)isDuplicateOnFollowFeed:(id)a0;
- (void)addDuplicateDeleteItems:(id)a0;
- (id)shownReferStringWithDuplicateItemID:(id)a0;
- (BOOL)isViewed:(id)a0;
- (id)allDuplicateDeleteItems;
- (BOOL)duplicateFilterOptimizeEnable;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)dealloc;

@end
