@class IESLiveGiftLynxPlayer, NSString, IESLiveGiftMP4Player, IESLiveGiftFusionPlayerController;
@protocol IESLiveGiftPlayerDelegate;

@interface IESLiveGiftFusionPlayer : NSObject <IESLiveGiftLynxPlayerDelegate, IESLiveGiftMP4PlayerDelegate>

@property (retain, nonatomic) IESLiveGiftLynxPlayer *lynxAssetPlayer;
@property (retain, nonatomic) IESLiveGiftMP4Player *mp4AssetPlayer;
@property (retain, nonatomic) IESLiveGiftFusionPlayerController *controller;
@property (weak, nonatomic) id<IESLiveGiftPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)mp4Player:(id)a0 didFinishPlayingWithError:(id)a1;
- (void)playLynx;
- (void)didFinishPlaying:(BOOL)a0 error:(id)a1;
- (void)playMP4WithHierarchy:(id)a0 resourcePath:(id)a1;
- (void)monitorEffectAnimationWithNode:(id)a0 error:(id)a1;
- (void)lynxPlayer:(id)a0 didFinishPlayingWithError:(id)a1;
- (void)lynxPlayer:(id)a0 didReceiveEvent:(id)a1 extraDict:(id)a2;
- (void).cxx_destruct;
- (void)stop;
- (void)play:(id)a0;

@end
