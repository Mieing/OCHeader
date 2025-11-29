@class NSMutableArray;

@interface IESIMChatListInsertMetrics : NSObject

@property (nonatomic) long long originChatCount;
@property (nonatomic) BOOL hasPreSort;
@property (nonatomic) BOOL enableOnlyUpdate;
@property (nonatomic) BOOL enableMoveChat;
@property (nonatomic) long long finalChatCount;
@property (nonatomic) long long emptySessionIDCount;
@property (retain, nonatomic) NSMutableArray *duplicatedSessionIDs;
@property (retain, nonatomic) NSMutableArray *onlyUpdateSessionIDs;
@property (retain, nonatomic) NSMutableArray *movedSessionIDs;
@property (nonatomic) long long tailInsertCount;
@property (nonatomic) double preLogicBeginTime;
@property (nonatomic) double preLogicEndTime;
@property (nonatomic) double coreLogicBeginTime;
@property (nonatomic) unsigned long long insertType;
@property (nonatomic) double coreLogicEndTime;
@property (nonatomic) double postLogicBeginTime;
@property (nonatomic) double postLogicEndTime;

- (void)onEmptySessionID;
- (void)onDuplicateChatSessionID:(id)a0;
- (void)onOnlyUpdateChatSessionID:(id)a0;
- (void)onMovedChatSessionID:(id)a0;
- (void)onPreLogicBegin:(id)a0;
- (void)onPreLogicEnd:(id)a0;
- (void)onCoreLogicBegin;
- (void)onCoreLogicEnd;
- (void)onInsertType:(unsigned long long)a0;
- (void)onTailInsert:(long long)a0;
- (void)onPostLogicBegin;
- (void)onPostLogicEnd;
- (void).cxx_destruct;
- (id)init;
- (void)reportMetrics;

@end
