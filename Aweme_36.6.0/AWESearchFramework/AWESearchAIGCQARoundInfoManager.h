@class NSString, NSMutableArray;

@interface AWESearchAIGCQARoundInfoManager : NSObject <AWESearchAIGCQARoundInfoManagerProtocol>

@property (retain, nonatomic) NSMutableArray *allRounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roundInfoForSearchID:(id)a0;
- (id)roundInfoForSearchUniqueID:(id)a0;
- (BOOL)isLastRoundWithSearchUniqueID:(id)a0;
- (id)allQARoundInfos;
- (id)addQueryNode:(id)a0 searchUniqueID:(id)a1;
- (id)roundInfoForNode:(id)a0;
- (void)insertToFrontWithRoundInfos:(id)a0;
- (id)buildRoundInfoWithSearchUniqueID:(id)a0;
- (BOOL)removeRoundWithSearchUniqueID:(id)a0;
- (BOOL)removeRoundWithSearchID:(id)a0;
- (BOOL)removeRoundWithNode:(id)a0;
- (id)allQARoundInfosWithConversationID:(id)a0;
- (id)addFrontQueryNode:(id)a0 searchUniqueID:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
