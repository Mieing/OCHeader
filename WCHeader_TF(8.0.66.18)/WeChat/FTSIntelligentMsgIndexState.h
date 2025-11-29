@class NSMutableSet, NSMutableDictionary;

@interface FTSIntelligentMsgIndexState : NSObject {
    int _taskId;
}

@property (retain, nonatomic) NSMutableSet *nextMsgIndexSessions;
@property (retain, nonatomic) NSMutableSet *preMsgIndexSessions;
@property (retain, nonatomic) NSMutableSet *missingMsgIndexSessions;
@property (retain, nonatomic) NSMutableDictionary *dicSessionMaxId;
@property (nonatomic) BOOL hasDeleteTask;
@property (nonatomic) BOOL doIngWork;

- (id)init;
- (BOOL)hasFinishAllTask;
- (id)description;
- (void).cxx_destruct;

@end
