@class NSString, AWEDanmakuInputViewParamsConfig, AWEDanmakuInputHandler;

@interface AWEDanmakuInputModule : AWEDanmakuBaseModule <AWEDanmakuInputHandlerDelegate, AWEPlayInteractionComponentTrackPluginProtocol, AWEDanmakuInputModuleProtocol>

@property (retain, nonatomic) AWEDanmakuInputHandler *inputHandler;
@property (retain, nonatomic) AWEDanmakuInputHandler *replyInputHandler;
@property (retain, nonatomic) AWEDanmakuInputHandler *currentInputHandler;
@property (nonatomic) double danmakuInputViewClickTime;
@property (nonatomic) double videoShowTime;
@property (readonly, nonatomic) AWEDanmakuInputViewParamsConfig *inputParamsConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEDanmakuInputControllerAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)getAwemeModelForTrackComponent;
- (id)getBizParamsForTrackComponentWithStayDuration;
- (double)playPercent;
- (BOOL)isLandScapeDanmaku;
- (id)aAWEPlayInteractionAdapter;
- (id)getPlayTrackParams;
- (void)showDanmakuInputView:(id)a0 replyDanmakuModel:(id)a1;
- (long long)danmakuInputOffsetTimeMS;
- (long long)danmakuOffsetTimeMS;
- (void)sendDanmakuFromInputHandler:(id)a0 withInputModel:(id)a1;
- (void)commentInputViewDanmakuSwitchButtonClicked:(id)a0 logExtraDict:(id)a1;
- (id)configNewPublishDanmakuModelWithInputModel:(id)a0;
- (BOOL)canShowDanmakuEgg;
- (void)handleArchivalDanmaku;
- (id)getDanmakuSendTrackParamsWithInputModel:(id)a0 postScene:(long long)a1;
- (void)trackDanmakuSendSuccess:(id)a0 extraParams:(id)a1;
- (void)trackDanmakuEggShow:(id)a0 eggDanmakuID:(id)a1 eggDanmakuMaterialID:(id)a2;
- (void)processPostDanmakuItemWithErrorIfNeed:(id)a0 danmakuItem:(id)a1;
- (void)sendWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)isDanmakuSwitchOn;
- (void)showDanmakuSwitchGuideIfNeed:(id)a0;
- (id)aAWEDanmakuInputControllerAdapter;
- (void).cxx_destruct;
- (void)reset;
- (void)updateWithModel:(id)a0;

@end
