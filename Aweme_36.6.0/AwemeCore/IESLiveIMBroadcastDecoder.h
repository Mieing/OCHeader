@interface IESLiveIMBroadcastDecoder : IESLiveIMPayloadDecoder

- (void)decode:(id)a0 completion:(id /* block */)a1;
- (id)transformWrapperWith:(id)a0;

@end
