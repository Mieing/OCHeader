@class NSNumber;

@interface IESLiveInteractOpenContainerCastAPI : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomID;

- (id)initWithRoomID:(id)a0;
- (void)startCastWithType:(unsigned long long)a0 appID:(id)a1 profile:(int)a2 callback:(id /* block */)a3;
- (void)stopCastWithType:(unsigned long long)a0 appID:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;

@end
