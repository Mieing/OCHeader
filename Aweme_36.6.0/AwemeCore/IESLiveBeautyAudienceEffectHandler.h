@class IESLiveRoomBeautyItem, NSArray, NSString;

@interface IESLiveBeautyAudienceEffectHandler : IESLiveBeautyBaseHandler <IESLiveEffectConflictStatusHandle>

@property (retain, nonatomic) IESLiveRoomBeautyItem *noneItem;
@property (nonatomic) long long selectIndex;
@property (retain, nonatomic) NSArray *activityEffectList;
@property (retain, nonatomic) NSArray *originEffectList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEffectConflictStatus:(long long)a0 scene:(long long)a1;
- (void)itemDidSelect:(id)a0;
- (void)updateTotalItems;
- (void)updateActivityEffects;
- (id)initWithConfig:(id)a0 context:(id)a1 diContext:(id)a2;
- (long long)currentEffectProcessScene;
- (void)updateOriginEffects;
- (id)transEffectModelsToBeautyItems:(id)a0;
- (void)updateSelectionStatus;
- (id)provideAdjustView;
- (void)downloadItem:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)currentEffect;

@end
