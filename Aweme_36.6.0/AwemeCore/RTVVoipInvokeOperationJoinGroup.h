@class NSNumber, NSString;

@interface RTVVoipInvokeOperationJoinGroup : RTVVoipInvokeOperation

@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSNumber *bizType;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) NSNumber *cameraOff;
@property (readonly, copy, nonatomic) NSString *followUserID;

- (id)initWithObserverRoomInfo:(id)a0 enterFrom:(unsigned long long)a1 source:(long long)a2 cameraOff:(id)a3 selfIMID:(id)a4 roomID:(id)a5;
- (void)updateBizType:(id)a0;
- (void)updateFollowUserID:(id)a0;
- (long long)operationType;
- (void).cxx_destruct;

@end
