@class NSString;

@interface RTVVoipRoomVolumeListener : NSObject <RTVVoipRoomVolumeListener>

@property (weak, nonatomic) id outListener;
@property (copy, nonatomic) NSString *roomId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onVolumeChangeWith:(BOOL)a0 linearVolume:(long long)a1 nonlinearVolume:(long long)a2 vad:(long long)a3;
- (void).cxx_destruct;

@end
