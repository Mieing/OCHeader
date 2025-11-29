@interface IESLiveStreamDispatcherAPI : HTSLiveApi

- (void)requestDetail:(id)a0 roomID:(id)a1 streamID:(id)a2 callback:(id /* block */)a3;
- (void)requestDetail:(id)a0 roomID:(id)a1 withCallback:(id /* block */)a2;

@end
