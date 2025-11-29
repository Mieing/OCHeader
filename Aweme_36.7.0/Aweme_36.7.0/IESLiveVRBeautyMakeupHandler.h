@class NSArray, NSString;

@interface IESLiveVRBeautyMakeupHandler : IESLiveBeautyMakeupHandler <IESLiveEffectRenderListener>

@property (retain, nonatomic) NSArray *vrRootItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindService;
- (id)initWithConfig:(id)a0 context:(id)a1 diContext:(id)a2;
- (id)provideBeautyResourceInfo;
- (long long)currentEffectProcessScene;
- (id)kvStoreSelectedMakeupKey;
- (void)onEffectRenderCallback:(int)a0 arg1:(int)a1 arg2:(int)a2 arg3:(id)a3;
- (void)setupVRRoot;
- (void).cxx_destruct;

@end
