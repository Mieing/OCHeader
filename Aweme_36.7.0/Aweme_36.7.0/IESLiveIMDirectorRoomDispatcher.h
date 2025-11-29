@class NSString;

@interface IESLiveIMDirectorRoomDispatcher : IESLiveIMBaseDispatcher <IESLiveDirectorRoomMessageSubDispatchProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asyncQueryWRDSMessage:(Class)a0 withSubkey:(id)a1 completion:(id /* block */)a2;

@end
