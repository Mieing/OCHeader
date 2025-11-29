@class NSString;
@protocol ACCImageAlbumEditorSessionProtocol;

@interface ACCImageAlbumEditFilterWraper : NSObject <ACCEditBuildListener, ACCImageEditFilterProtocolD>

@property (weak, nonatomic) id<ACCImageAlbumEditorSessionProtocol> player;
@property (copy, nonatomic) NSString *currentFilterId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (void)startAudioFilters:(id)a0 forVideoAssets:(id)a1;
- (void)stopFiltersforVideoAssets:(id)a0;
- (void)updateAudioFilterInfos:(id)a0 forAudioAssets:(id)a1;
- (void)updateAudioFilterInfos:(id)a0 forVideoAssets:(id)a1;
- (BOOL)switchColorLeftFilter:(id)a0 rightFilter:(id)a1 inPosition:(float)a2 inLeftIntensity:(float)a3 inRightIntensity:(float)a4;
- (void)p_updateLastUseTimeForEffect:(id)a0;
- (void)applyFilterEffectForAll:(id)a0 intensity:(float)a1;
- (float)filterEffectOriginIndensity:(id)a0;
- (void)applyFilterEffect:(id)a0 intensity:(float)a1 isGlobal:(BOOL)a2;
- (void)applyFilterEffect:(id)a0 isGlobal:(BOOL)a1;
- (BOOL)switchColorLeftFilter:(id)a0 rightFilter:(id)a1 inPosition:(float)a2;
- (void)applySpecialFilter:(id)a0;
- (void)applyFilterEffectForAll:(id)a0;
- (void).cxx_destruct;

@end
