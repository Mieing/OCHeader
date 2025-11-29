@class AWETemplateTagsModel, NSString, AWETemplateTagsContext;
@protocol AWETemplateTagsStrategyProtocol, AWETemplateTagsViewModelDelegate;

@interface AWETemplateTagsViewModel : NSObject <AWETemplateTagsViewModelProtocol>

@property (retain, nonatomic) AWETemplateTagsModel *model;
@property (retain, nonatomic) id<AWETemplateTagsStrategyProtocol> strategy;
@property (weak, nonatomic) id<AWETemplateTagsViewModelDelegate> delegate;
@property (retain, nonatomic) AWETemplateTagsContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prepareWithModel:(id)a0 context:(id)a1;
+ (id)activeInfoWithTagsModel:(id)a0 context:(id)a1;
+ (BOOL)enableGeneralLabelShowConditionConverge;
+ (id)getLabelToShowWithContext:(id)a0 tagID:(id)a1;
+ (BOOL)enableFixLabelShowBug;
+ (BOOL)supportDynamicUpdate;
+ (id)dynamicGetLabelToShowWithContext:(id)a0 tagID:(id)a1;
+ (BOOL)shouldShowTagsWithContext:(id)a0 tagModel:(id)a1;
+ (BOOL)disableShowV2ElementOnPlaylet:(id)a0 tagModel:(id)a1;
+ (BOOL)enableFixLabelDismiss;

- (id)awemeModel;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewDidAppear;
- (id)commonTrackParams;
- (id)extraTrackParams;
- (void)didInitializeView;
- (void)didClickWithEvent:(id)a0;
- (void)didTriggerEvent:(id)a0;
- (BOOL)shouldShowReplaceAnimation;
- (void)didUpdateAfterTagReplace;
- (id)extraTrackParamsForShow;
- (id)extraTrackParamsForClick;
- (void)tagDidShow;
- (BOOL)shouldActiveWithModel:(id)a0;
- (void)didTriggerTagRefreshEvent;
- (void)handleTriggerEvent:(id)a0;
- (BOOL)shouldUseCustomViewWithModel:(id)a0;
- (Class)strategyForHandleReplaceEvent:(id)a0;
- (long long)replaceEventHandleTypeForStrategyClass:(Class)a0;
- (id)replaceEventBusinessIDForStrategyClass:(Class)a0;
- (id)replaceEventModelWithStrategyClass:(Class)a0 context:(id)a1;
- (void)didTriggerTagUpdateEventWithModel:(id)a0;
- (void)trackForLabelClickEvent;
- (void)trackForExtraLabelClickEvent;
- (BOOL)shouldHandleReplaceTriggerEvent:(id)a0 strategyClass:(Class)a1;
- (void)trackForLabelShowEvent;
- (void).cxx_destruct;
- (long long)templateType;
- (long long)priority;
- (void)reset;
- (id)businessID;
- (id)customView;
- (id)pageContext;
- (void)updateWithModel:(id)a0;
- (void)didInitialize;

@end
