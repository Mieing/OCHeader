@class NSArray, NSString;

@interface IESLiveVRBeautyAppearanceHandler : IESLiveBeautyAppearanceHandler <IESLiveEffectRenderListener>

@property (retain, nonatomic) NSArray *vrRootItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindService;
- (id)initWithConfig:(id)a0 context:(id)a1 diContext:(id)a2;
- (void)beautyResourceDownloadComplete:(id)a0;
- (void)appearanceSwitchItemDidSelect:(id)a0;
- (id)provideBeautyResourceInfo;
- (long long)currentEffectProcessScene;
- (void)operateAllEffectItemsIsApply:(BOOL)a0;
- (void)onEffectRenderCallback:(int)a0 arg1:(int)a1 arg2:(int)a2 arg3:(id)a3;
- (void)setupVRRoot;
- (void)removeVRRootNode;
- (void)addVrRootNode;
- (void).cxx_destruct;

@end
