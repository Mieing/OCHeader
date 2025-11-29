@class NSMutableSet, NSMutableDictionary;

@interface FTSMsgIndexState : NSObject {
    int _taskId;
}

@property (retain, nonatomic) NSMutableSet *nextMsgIndexSessions;
@property (retain, nonatomic) NSMutableSet *preMsgIndexSessions;
@property (retain, nonatomic) NSMutableDictionary *dicSessionMaxId;
@property (nonatomic) BOOL hasDeleteTask;
@property (nonatomic) BOOL hasMigrationTask;

- (id)init;
- (BOOL)hasFinishAllTask;
- (id)description;
- (void).cxx_destruct;

@end
