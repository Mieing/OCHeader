@class NSString, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCSideslipBaseFocusHandler : NSObject <ACCSideslipPropPanelFocusEditorHandleServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) long long applyedEffectIndex;
@property (copy, nonatomic) NSString *applyedEffectId;
@property (nonatomic) BOOL hasApplyPropFailed;
@property (nonatomic) BOOL handleItemPickedIsScrollByUserDrag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCancelPickedPropIfNeeded;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)handleItemPickedIsScrollByUserDrag:(BOOL)a0;
- (void)handleWillScroll;
- (void)handleDidEndScroll;
- (void)handleWillBeginScrollByUserDrag;
- (void)handleDidEndScrollByUserDrag;
- (void)relocateApplyPropIfNeeded;
- (void)updateApplyedEffectIfNeeded:(BOOL)a0;
- (void)handleRemoveApplyedEffectOrTemplateIfNeededWith:(id)a0;
- (void)resetPropTryStartTimeIfNeeded;
- (void)trackPropTryFinishEventIfNeeded;
- (void)trackPropTry;
- (void).cxx_destruct;

@end
