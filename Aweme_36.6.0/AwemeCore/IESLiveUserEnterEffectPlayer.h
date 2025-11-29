@class NSString, HTSLiveUserEnterConfiguration, IESLiveUserEnterEffectNode, UIView, IESLiveVideoGiftController;
@protocol IESLiveUserEnterEffectPlayerDelegate;

@interface IESLiveUserEnterEffectPlayer : NSObject <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) IESLiveVideoGiftController *giftController;
@property (retain, nonatomic) IESLiveUserEnterEffectNode *currentEffectNode;
@property (retain, nonatomic) UIView *effectContainerView;
@property (retain, nonatomic) HTSLiveUserEnterConfiguration *configuration;
@property (weak, nonatomic) id<IESLiveUserEnterEffectPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 didTapMasks:(id)a1;
- (void)videoGiftController:(id)a0 isReadyToPlayOnView:(id)a1;
- (void)closePlayer;
- (void)setupVideoGiftControl;
- (void)playWithEffectNode:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)cancelWithError:(id)a0;
- (void)cancel;

@end
