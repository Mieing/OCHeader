@class NSArray, NSString;

@interface ACCSideslipPanelApplyContainer : NSObject <ACCSideslipPanelApplyCoordinator>

@property (copy, nonatomic) NSArray *applyHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceRemoveAppliedEffectWithScene:(unsigned long long)a0;
- (BOOL)handleApplyWithEffectRawModel:(id)a0;
- (id)initWithApplyHandlers:(id)a0;
- (BOOL)handleRemoveAppliedEffectWithScene:(id)a0;
- (void)willReplaceSlotWithScene:(unsigned long long)a0;
- (void)removeAppliedEffectWithScene:(unsigned long long)a0 context:(id)a1;
- (void)updateApplyWithEffectRawModel:(id)a0 resources:(id)a1;
- (void).cxx_destruct;

@end
