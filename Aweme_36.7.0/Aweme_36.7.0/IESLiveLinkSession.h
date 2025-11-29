@class NSString, NSMutableDictionary, NSArray, NSMutableArray, IESLiveLinkIntent;

@interface IESLiveLinkSession : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long sessionType;
@property (retain, nonatomic) NSMutableArray *linkNodes;
@property (retain, nonatomic) NSMutableDictionary *nodeMap;
@property (nonatomic) BOOL configInitial;
@property (retain, nonatomic) NSArray *nodeConfigs;
@property (retain, nonatomic) IESLiveLinkIntent *intent;
@property (nonatomic) long long clearStrategy;
@property (nonatomic) double clearOverTime;
@property (copy, nonatomic) id /* block */ removeBlock;

- (id)nodeWithId:(id)a0;
- (BOOL)checkAllNodeFinished:(BOOL)a0;
- (void)_realClearAll;
- (void)subscribeNodeStateChange;
- (void)parserConfig:(id)a0;
- (void)runWithNodeId:(id)a0 context:(id)a1;
- (id)runWithNodeId:(id)a0 taskInfo:(id)a1 taskBlock:(id /* block */)a2 finishedBlock:(id /* block */)a3;
- (void)changeSessionIdWithId:(id)a0;
- (void)removeNodeWithId:(id)a0;
- (void)clearAll:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
