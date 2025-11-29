@class NSString;

@interface IESLiveAioLinkRoomImpl : NSObject <IESLiveAioLinkRoom>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (id)currentRoom;
- (int)getOrientation;

@end
