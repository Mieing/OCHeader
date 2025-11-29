@class NSString;

@interface AWELiveAnchorActionsImpl : NSObject <IESLiveAnchorRoomStatusChangeEvents>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnchorLiveWithRoom:(id)a0;
- (void)stopAnchorLive;

@end
