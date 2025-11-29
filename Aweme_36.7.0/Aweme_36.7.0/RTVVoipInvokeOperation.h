@class RxDeferred, NSDate, RxTwoTuple, RTVBehaviorOptions, RTVVoipInvokeExternBusinessInfo, NSDictionary, NSMutableArray, RTVVoipModel, RTVFinishForwardModel, RTVVoipInitialAction;

@interface RTVVoipInvokeOperation : NSObject

@property (nonatomic) BOOL checked;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) unsigned long long callScene;
@property (readonly, nonatomic) BOOL useRtcTestEnv;
@property long long requestStatus;
@property (retain, nonatomic) RxDeferred *requestFinished;
@property (retain, nonatomic) RxDeferred *requestVoIPModel;
@property (readonly, nonatomic) long long operationType;
@property (readonly, nonatomic) long long voipType;
@property (readonly, nonatomic) long long callType;
@property (readonly, nonatomic) unsigned long long enterFrom;
@property (retain, nonatomic) RTVVoipModel *voip;
@property (readonly, nonatomic) unsigned long long operationState;
@property (readonly, nonatomic) NSDate *createDate;
@property (readonly, nonatomic) RTVFinishForwardModel *finishForwardModel;
@property (readonly, nonatomic) RTVVoipInitialAction *initialAction;
@property (readonly, nonatomic) long long interactionAction;
@property (readonly, copy, nonatomic) NSDictionary *trackDictionary;
@property (retain, nonatomic) RxTwoTuple *customEnterFromInfo;
@property (readonly, nonatomic) RTVVoipInvokeExternBusinessInfo *externBusinessInfo;
@property (readonly, copy, nonatomic) NSDictionary *localExtInfo;
@property (readonly, nonatomic) RTVBehaviorOptions *behaviorOptions;
@property (retain, nonatomic) NSMutableArray *exemptCodeArray;

- (id)businessModel;
- (void)updateCallScene:(unsigned long long)a0;
- (void)mergeInitialActions:(long long)a0;
- (void)updateTrackDictionary:(id)a0;
- (void)updateLocalExtInfo:(id)a0;
- (void)updateBehaviorOptions:(id)a0;
- (void)updateExternBusinessInfo:(id)a0;
- (void)updateUseRtcTestEnv:(BOOL)a0;
- (void)updateFinishForwardModel:(id)a0;
- (void)updateCustomEnterFromInfo:(id)a0;
- (void)updateInitialAction:(id)a0;
- (void)udapteInteractionAction:(long long)a0;
- (void)updateOperationState:(unsigned long long)a0;
- (void)updateVoip:(id)a0;
- (id)initWithCallType:(long long)a0 voipType:(long long)a1 enterFrom:(unsigned long long)a2;
- (void)markRequestComplete;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
