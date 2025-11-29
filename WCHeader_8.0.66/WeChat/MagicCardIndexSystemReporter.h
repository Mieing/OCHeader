@class NSString;

@interface MagicCardIndexSystemReporter : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onServiceInit;
+ (void)onServiceClearData;
+ (void)dealloc;
+ (void)expt:(id)a0 action:(unsigned long long)a1 groupId:(int)a2 extMap:(id)a3;
+ (void)report:(id)a0 bizSubScene:(id)a1 cardId:(id)a2 action:(unsigned long long)a3 isNewImpl:(unsigned char)a4 traceId:(id)a5 extMap:(id)a6;
+ (void)mediaEvent:(id)a0 reportInfo:(id)a1 extJson:(id)a2 isNewImpl:(unsigned char)a3;
+ (void)jump:(unsigned long long)a0 isNewImpl:(unsigned char)a1 dicParam:(id)a2;
+ (int)getImplType:(unsigned long long)a0;
+ (id)getExptString:(id)a0 key:(id)a1 value:(id)a2;
+ (id)directionActionString:(unsigned long long)a0;
+ (id)directionJumpToString:(unsigned long long)a0;


@end
