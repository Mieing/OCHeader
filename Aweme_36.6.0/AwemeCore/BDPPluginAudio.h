@class NSObject, NSPointerArray, BDPUniqueID, BDPAudioPlayerService;
@protocol OS_dispatch_semaphore;

@interface BDPPluginAudio : BDPBridgeInstancePlugin {
    NSPointerArray *_createdPlayers;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (retain, nonatomic) BDPAudioPlayerService *audioPlayerService;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (void)createAudioInstanceWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)destroyAudioInstanceWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateAudioWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getAudioStateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setAudioStateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
