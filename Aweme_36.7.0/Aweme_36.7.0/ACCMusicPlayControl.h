@class NSString;
@protocol ACCEditStandaloneMusicPlayerProtocol, ACCEditPreviewProtocol;

@interface ACCMusicPlayControl : NSObject <ACCMusicPlayControlProtocol>

@property (weak, nonatomic) id<ACCEditStandaloneMusicPlayerProtocol> standalonePlayer;
@property (weak, nonatomic) id<ACCEditPreviewProtocol> previewPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)play;
- (void)pause;

@end
