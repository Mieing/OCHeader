@class NSNumber;

@interface IESLiveSmallWindowAPI : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomID;

- (id)initWithRoomID:(id)a0;
- (void)fetchRoomInfoWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)getWaitingOffsetWithRoomID:(id)a0 scene:(unsigned long long)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)applyStashWithWithExtraParams:(id)a0 roomId:(id)a1 action:(long long)a2 applyType:(long long)a3 completion:(id /* block */)a4;
- (void)stopInteractiveWithExtraParams:(id)a0 roomId:(id)a1 completion:(id /* block */)a2;
- (void)checkState:(id)a0 finished:(id /* block */)a1 retryCount:(long long)a2;
- (void)checkState:(id)a0 finished:(id /* block */)a1;
- (void).cxx_destruct;

@end
