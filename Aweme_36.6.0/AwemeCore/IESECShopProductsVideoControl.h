@class NSString, IESECVideoPlayerController, IESECShopProductsPlayableTask, UIView, UIImageView;

@interface IESECShopProductsVideoControl : NSObject <IESECVideoPlayerControllerDelegate, IESECShopProductsPlayableMediaControl> {
    IESECVideoPlayerController *_playerController;
    UIView *_container;
    UIImageView *_playerIconView;
}

@property (readonly, nonatomic) IESECShopProductsPlayableTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerController:(id)a0 updateCurrent:(double)a1 duration:(double)a2;
- (void)playerController:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)videoReadyToDisplayOfPlayerController:(id)a0;
- (void)playWithTask:(id)a0;
- (void)skipCurrentTask;
- (void)stopPlaying;
- (void).cxx_destruct;
- (id)init;

@end
