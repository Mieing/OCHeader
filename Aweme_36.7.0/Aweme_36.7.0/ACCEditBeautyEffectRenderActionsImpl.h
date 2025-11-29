@class ACCEditBeautyEffectDDExeContext, NSString;

@interface ACCEditBeautyEffectRenderActionsImpl : NSObject <ACCEditBeautyEffectRenderActions>

@property (retain, nonatomic) ACCEditBeautyEffectDDExeContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)turnOnBeauty;
- (void)turnOffBeauty;
- (void)applyItem:(id)a0 value:(long long)a1;
- (void)removeAllAppliedItems;
- (void)updateAppliedBeautyModels;
- (void).cxx_destruct;
- (void)removeItems:(id)a0;

@end
