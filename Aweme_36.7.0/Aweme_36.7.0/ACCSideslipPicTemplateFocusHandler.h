@class NSString, ACCSideslipPanelApplyContainer, ACCSideslipPanelPicTemplateApplyHandler;
@protocol ACCSideslipPropService, ACCSequenceEditServiceProtocol, ACCSideslipPropPanelService;

@interface ACCSideslipPicTemplateFocusHandler : ACCSideslipBaseFocusHandler <ACCSequenceEditServicePlayerSubscriber> {
    BOOL hasApplyPropFailed;
}

@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) ACCSideslipPanelApplyContainer *applyContainer;
@property (retain, nonatomic) ACCSideslipPanelPicTemplateApplyHandler *picTemplateApplyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)bindService;
- (void)handleCancelPickedPropIfNeeded;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)handleItemPickedIsScrollByUserDrag:(BOOL)a0;
- (BOOL)hasApplyPropFailed;
- (void)handleRemoveApplyedEffectOrTemplateIfNeededWith:(id)a0;
- (id)applyedEffectId;
- (void)setHasApplyPropFailed:(BOOL)a0;
- (void)handlePickedPropApplyIfNeededByUserDrag:(BOOL)a0;
- (void).cxx_destruct;

@end
