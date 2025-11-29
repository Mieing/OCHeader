@class IESLiveRoomBeautyItem, IESLiveSlideLabelAnimator, NSString;

@interface IESLiveBeautyFilterHandler : IESLiveBeautyBaseHandler <IESLiveEffectConflictStatusHandle, IESLiveSyncEffectActions>

@property (retain, nonatomic) IESLiveRoomBeautyItem *currentSelectedFilter;
@property (retain, nonatomic) IESLiveRoomBeautyItem *cachedSelectedFilter;
@property (retain, nonatomic) IESLiveSlideLabelAnimator *animator;
@property (nonatomic) BOOL isECommerceNoFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEffectConflictStatus:(long long)a0 scene:(long long)a1;
- (void)setupParams;
- (void)itemDidSelectWhenProhibited;
- (void)itemDidSelect:(id)a0;
- (id)initWithConfig:(id)a0 context:(id)a1 diContext:(id)a2;
- (void)beautyResourceDownloadComplete:(id)a0;
- (void)onEntryItemSelected;
- (id)provideBeautyResourceInfo;
- (long long)currentEffectProcessScene;
- (id)needAutoRenderBeautyItems;
- (id)applyingBeautyItems;
- (void)rememberEffectiveValue;
- (void)recoverEffectiveValue;
- (void)bindBizService;
- (void)didUpdateECommerceNoFilter:(BOOL)a0;
- (void)parseFilterExtra:(id)a0 toItem:(id)a1;
- (id)appendNoneItemWith:(id)a0;
- (void)handleSwipeLeft;
- (void)handleSwipeRight;
- (void)itemDidSelect:(id)a0 isSwipe:(BOOL)a1;
- (void)trackItem:(id)a0 selectedBySwipe:(BOOL)a1;
- (void)memoryAppliedFilterInfoWith:(id)a0;
- (id)kvStoreSelectedFilterKey;
- (id)getNextFilter:(BOOL)a0;
- (void)showFilterName:(id)a0 slidePosition:(BOOL)a1;
- (void)setupSwipeFilterViewIfNeed;
- (void).cxx_destruct;
- (long long)defaultSelectedIndex;
- (void)updateContext:(id)a0;
- (void)handleSwipe:(BOOL)a0;

@end
