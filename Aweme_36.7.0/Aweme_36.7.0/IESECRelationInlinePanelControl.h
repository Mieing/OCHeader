@class NSString, IESECRelationInlineVideoSwitch, IESLiveVideoPlayerController, IESECRelationInlineDanmakuView;

@interface IESECRelationInlinePanelControl : UIView <IESECRelationInlineVideoSwitchDelegate> {
    IESLiveVideoPlayerController *_player;
    BOOL _danmakuIsOn;
}

@property (retain, nonatomic) IESECRelationInlineVideoSwitch *videoSwitch;
@property (retain, nonatomic) IESECRelationInlineDanmakuView *danmakuView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showSwitchWithTypes:(id)a0;
- (void)showDanmakuViewWithDataArray:(id)a0;
- (void)updateState:(unsigned long long)a0 state:(BOOL)a1;
- (void)switchClick:(unsigned long long)a0 isOn:(BOOL)a1;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithPlayer:(id)a0;
- (void)setupUI;

@end
