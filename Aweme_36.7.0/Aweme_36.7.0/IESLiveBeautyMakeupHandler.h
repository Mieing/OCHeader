@class IESLiveRoomBeautyItem, NSString;

@interface IESLiveBeautyMakeupHandler : IESLiveBeautyBaseHandler <IESLiveEffectConflictStatusHandle>

@property (retain, nonatomic) IESLiveRoomBeautyItem *selectedMakeupItem;
@property (retain, nonatomic) IESLiveRoomBeautyItem *cachedSelectedMakeupItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEffectConflictStatus:(long long)a0 scene:(long long)a1;
- (void)itemDidSelect:(id)a0;
- (void)updateCustomRangeSliderConfig:(id)a0 withItem:(id)a1;
- (id)initWithConfig:(id)a0 context:(id)a1 diContext:(id)a2;
- (void)beautyResourceDownloadComplete:(id)a0;
- (void)onEntryItemSelected;
- (id)provideBeautyResourceInfo;
- (long long)currentEffectProcessScene;
- (id)needAutoRenderBeautyItems;
- (id)applyingBeautyItems;
- (void)rememberEffectiveValue;
- (void)recoverEffectiveValue;
- (id)kvStoreSelectedMakeupKey;
- (void)memoryAppliedMakeupInfoWith:(id)a0;
- (void).cxx_destruct;
- (long long)defaultSelectedIndex;

@end
