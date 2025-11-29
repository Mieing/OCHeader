@class NSString, NSNumber;

@interface RTVVoipInvokeOperationJoinInvite : RTVVoipInvokeOperation

@property (readonly, copy, nonatomic) NSString *notifyFrom;
@property (readonly, copy, nonatomic) NSString *sceneType;
@property (readonly, nonatomic) NSNumber *cameraOff;

- (id)initWithVoip:(id)a0 enterFrom:(unsigned long long)a1 notifyFrom:(id)a2 sceneType:(id)a3 cameraOff:(id)a4 micOff:(id)a5;
- (long long)operationType;
- (void).cxx_destruct;

@end
