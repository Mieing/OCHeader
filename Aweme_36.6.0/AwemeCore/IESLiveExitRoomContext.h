@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveExitRoomContext : NSObject <IESLiveExitRoomService>

@property (nonatomic) BOOL skipExitCheck;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly, nonatomic) unsigned long long closeType;
@property (readonly, nonatomic) unsigned long long exitRoomType;
@property (readonly, nonatomic) unsigned long long reuseSource;
@property (nonatomic) BOOL closing;
@property (nonatomic) unsigned long long manualOperationCloseType;
@property (readonly, nonatomic) BOOL isReuse;
@property (readonly, nonatomic) NSString *reuseCallTrace;
@property (nonatomic) BOOL exited;
@property (nonatomic) BOOL clickedClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logEvent:(id)a0 params:(id)a1;
- (void)setCloseType:(unsigned long long)a0 callTrace:(id)a1;
- (void)processState:(unsigned long long)a0 actionCreator:(id)a1;
- (BOOL)checkCanExitRoom;
- (void)resetAdditionalInfo;
- (void)setSkipExitCheck:(BOOL)a0 callTrace:(id)a1;
- (void)setIsReuse:(BOOL)a0 reuseSource:(unsigned long long)a1 callTrace:(id)a2;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
