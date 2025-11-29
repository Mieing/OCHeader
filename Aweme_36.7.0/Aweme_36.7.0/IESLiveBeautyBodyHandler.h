@class NSString;

@interface IESLiveBeautyBodyHandler : IESLiveBeautyBaseHandler <IESLiveEffectConflictStatusHandle>

@property (nonatomic) BOOL isProhibitedByBiz;
@property (nonatomic) BOOL isProhibitedByConflict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEffectConflictStatus:(long long)a0 scene:(long long)a1;
- (void)itemDidSelectWhenProhibited;
- (void)switchItemDidSelect:(id)a0;
- (id)initWithConfig:(id)a0 context:(id)a1 diContext:(id)a2;
- (void)beautyResourceDownloadComplete:(id)a0;
- (void)onEntryItemSelected;
- (id)provideBeautyResourceInfo;
- (long long)currentEffectProcessScene;
- (id)needAutoRenderBeautyItems;
- (BOOL)isAvatarMode;
- (void)updateProhibited;
- (long long)defaultSelectedIndex;

@end
