@class NSMutableSet, NSMutableDictionary;
@protocol AWESearchAIGCFoldNodeDelegate;

@interface AWESearchAIGCFoldNodeManager : NSObject

@property (retain, nonatomic) NSMutableSet *disableFoldIDs;
@property (retain, nonatomic) NSMutableDictionary *mixNodeMap;
@property (weak, nonatomic) id<AWESearchAIGCFoldNodeDelegate> delegate;

+ (BOOL)enableDoubleVideo;
+ (BOOL)enableOriginalDoubleVideo;

- (void)unfoldDoubleColumnWithIDs:(id)a0 removeNode:(id)a1 searchId:(id)a2;
- (void)updateDoubleVideoLoadMore:(id)a0;
- (id)preHandleWithCmdArray:(id)a0 response:(id)a1;
- (BOOL)enableFoldNode;
- (id)getCardIDWithCmdArray:(id)a0;
- (BOOL)isFoldNode:(id)a0;
- (id)foldID:(id)a0;
- (void)addNode:(id)a0 mixNodeID:(id)a1;
- (void)replaceNode:(id)a0 nodeID:(id)a1 mixNodeID:(id)a2;
- (id)getCopyMixNodeWithNodeID:(id)a0;
- (BOOL)enableSearchAIDouYinNewFramework;
- (BOOL)containFoldNodeForMixNode:(id)a0;
- (void)preHandleForDoubleColumnLoadHistory:(id)a0 context:(id)a1;
- (BOOL)containDoubleColumnNodeForMixNode:(id)a0;
- (void)insertDoubleColumnSpacingWithAnchor:(id)a0 context:(id)a1 insertRelation:(unsigned long long)a2;
- (void)insertDoubleColumnLayerWithAnchor:(id)a0 context:(id)a1;
- (id)getCardID:(id)a0;
- (void)foldFormIDs:(id)a0 toIDs:(id)a1 nodeID:(id)a2 searchId:(id)a3 currentRoundAllNodes:(id)a4;
- (void)unfoldWithIDs:(id)a0 removeNode:(id)a1 searchId:(id)a2;
- (void)preHandleForSaveLocalHistory:(id)a0;
- (void)preHandleForLoadHistory:(id)a0;
- (void)preHandleForLocalHistoryDoubleColumn:(id)a0 context:(id)a1;
- (void)insertDoubleColumnSpacingWithAnchor:(id)a0 context:(id)a1;
- (void)handleFoldHistoryForDoubleColumn:(id)a0 context:(id)a1;
- (id)getSubVmCardIDs:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
