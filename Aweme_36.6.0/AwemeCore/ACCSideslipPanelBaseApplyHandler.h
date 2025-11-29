@class AWEVideoPublishViewModel;
@protocol ACCSideslipPanelApplyCoordinator, IESServiceProvider;

@interface ACCSideslipPanelBaseApplyHandler : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCSideslipPanelApplyCoordinator> applyContainer;

- (id)initWithServiceContainer:(id)a0 repository:(id)a1;
- (void)forceRemoveAppliedEffectWithScene:(unsigned long long)a0;
- (BOOL)handleApplyWithEffectRawModel:(id)a0;
- (BOOL)handleRemoveAppliedEffectWithScene:(id)a0;
- (void)replaceWithEffectRawModel:(id)a0 resources:(id)a1;
- (void)willReplaceSlotWithScene:(unsigned long long)a0;
- (void)removeAppliedEffectWithScene:(unsigned long long)a0 context:(id)a1;
- (void).cxx_destruct;

@end
