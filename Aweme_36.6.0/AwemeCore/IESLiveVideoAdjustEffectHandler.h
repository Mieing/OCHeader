@class HTSEventContext, NSString;

@interface IESLiveVideoAdjustEffectHandler : NSObject <IESLiveVideoAdjustRegisterHandler>

@property (nonatomic) long long currentScene;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transItemsToEffectList:(id)a0 disable:(BOOL)a1;
- (void)didChangeValue:(long long)a0 item:(id)a1;
- (void)didFinishValueChange:(long long)a0 item:(id)a1;
- (void)didSelectLevelIndex:(unsigned long long)a0 forItem:(id)a1;
- (long long)getEffectScene;
- (void)trackLensFollowClicked:(id)a0;
- (void)processEffectConflictWith:(id)a0 levelModel:(id)a1;
- (void)applyEffectWith:(id)a0 levelModel:(id)a1;
- (id)initWithScene:(long long)a0 trackContext:(id)a1;
- (void)setupRenderWithItems:(id)a0 isReset:(BOOL)a1;
- (void).cxx_destruct;

@end
