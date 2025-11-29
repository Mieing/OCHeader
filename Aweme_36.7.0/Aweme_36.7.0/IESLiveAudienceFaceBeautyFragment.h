@class IESLiveBeautyHandlerWrapper, NSString, IESLiveBeautyPanelContainer;

@interface IESLiveAudienceFaceBeautyFragment : IESLiveRoomComponent <IESLiveAudienceBeautyRouter, HTSLiveMessageSubscriber, IESLiveBeautyHandlerDelegate>

@property (retain, nonatomic) IESLiveBeautyHandlerWrapper *handlerWrapper;
@property (retain, nonatomic) IESLiveBeautyPanelContainer *containerView;
@property (retain, nonatomic) NSString *pageSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (id)trackCommonParamsWithType:(long long)a0;
- (id)audineceBeautyConfigureView;
- (id)audineceBeautyConfigureViewWithSource:(id)a0;
- (void)loadEffectResourceAndApply;
- (void)refreshConfigCache;
- (void)undoAll;
- (BOOL)hasFaceEffectViewShowed;
- (void)removeCurrentFaceEffect;
- (void)reloadEffectpickerView;
- (id)undoScenes;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
