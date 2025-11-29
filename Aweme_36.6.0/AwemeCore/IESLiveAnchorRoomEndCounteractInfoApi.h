@class NSTimer;

@interface IESLiveAnchorRoomEndCounteractInfoApi : HTSLiveApi

@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (nonatomic) BOOL isEndInfoRequesting;

- (void)getRoomEndCounteractInfoWithRoomID:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
