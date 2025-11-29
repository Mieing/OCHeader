@class NSArray;
@protocol EmoticonServerNotifyTaskDelegate;

@interface EmoticonServerNotifyTask : MMObject

@property (nonatomic) unsigned long long opcode;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *md5ObjectArray;
@property (weak, nonatomic) id<EmoticonServerNotifyTaskDelegate> delegate;

- (id)initWithOpcode:(unsigned long long)a0 emoticonType:(unsigned long long)a1 md5ObjectArray:(id)a2 andDelegate:(id)a3;
- (BOOL)resumeLogic;
- (BOOL)resumeRecoverFromServerLogic;
- (void).cxx_destruct;

@end
