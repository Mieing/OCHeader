@class NSString;

@interface IESLivePlaybackRoomControllerFactory : NSObject <IESLivePlaybackRoomControllerFactoryProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)playbackRoomViewControllerWithParameters:(id)a0 episode:(id)a1 player:(id)a2 parentDIContext:(id)a3;

@end
