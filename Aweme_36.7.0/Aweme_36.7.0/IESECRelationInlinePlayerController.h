@class IESECRelationInlinePlayItem, NSString, IESECRelationInlinePanelControl, IESLiveVideoPlayerController, UIView;
@protocol IESECRelationInlinePlayerControllerDelegate;

@interface IESECRelationInlinePlayerController : NSObject <IESLiveVideoPlayerControllerDelegate> {
    IESECRelationInlinePlayItem *_playItem;
    UIView *_container;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) IESLiveVideoPlayerController *player;
@property (retain, nonatomic) IESECRelationInlinePanelControl *panelControl;
@property (copy, nonatomic) NSString *playerTag;
@property (copy, nonatomic) NSString *playerSubTag;
@property (weak, nonatomic) id<IESECRelationInlinePlayerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerController:(id)a0 currentPlayTime:(double)a1 playableTime:(double)a2 duration:(double)a3;
- (void)playerController:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)playWithItem:(id)a0 container:(id)a1;
- (void)setupPanelControl;
- (void)showSwitchWithTypes:(id)a0;
- (void)showDanmakuViewWithDataArray:(id)a0;
- (void)removeAnimation;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)clean;

@end
