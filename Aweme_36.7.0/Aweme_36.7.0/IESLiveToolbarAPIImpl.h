@class NSString;

@interface IESLiveToolbarAPIImpl : NSObject <IESLiveToolbarAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchRoomInfoByScene:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;

@end
