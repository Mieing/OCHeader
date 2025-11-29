@interface AWELivePreStreamDanmakuApi : NSObject

- (id)initWithDIContext:(id)a0;
- (void)fetchHistoryMessagesByHttpWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchHistoryMessagesWithRoomID:(id)a0 completion:(id /* block */)a1;

@end
