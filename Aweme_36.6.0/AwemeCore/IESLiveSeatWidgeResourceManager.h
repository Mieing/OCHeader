@class NSArray, NSString, IESLiveSeatWidgeEffectTask;

@interface IESLiveSeatWidgeResourceManager : IESLiveMultiBaseResourceManager <IESLiveSocialInteractPreLoadExAction>

@property (copy, nonatomic) NSArray *effects;
@property (retain, nonatomic) IESLiveSeatWidgeEffectTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)getEffectWithName:(id)a0 complete:(id /* block */)a1;
- (void)downloadWidgetEffects;
- (void)downloadEffectIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
