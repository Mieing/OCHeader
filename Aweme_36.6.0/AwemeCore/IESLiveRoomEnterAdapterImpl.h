@class NSString;

@interface IESLiveRoomEnterAdapterImpl : IESLiveBaseAdapter <IESLiveRoomEnterAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterRoomWithContextInfo:(id)a0;

@end
