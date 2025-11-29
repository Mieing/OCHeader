@class RTVVoipModel;

@interface RTVUpdateVoipAction : RTVBaseStateAction

@property (readonly, nonatomic) RTVVoipModel *updateVoip;
@property (readonly, nonatomic) long long voipStatus;
@property (readonly, nonatomic) long long sessionStatus;
@property (readonly, nonatomic) BOOL needPatch;
@property (readonly, nonatomic) long long eventCode;

- (id)initWithActionType:(long long)a0 updateVoip:(id)a1 statusCode:(long long)a2 sessionStatus:(long long)a3 needPatch:(BOOL)a4;
- (void).cxx_destruct;

@end
