@class AWETemplateTagsMultiScheduler, NSString, AWETemplateTagsModel, UIView, AWETemplateTagsViewModel, AWETemplateTagsContext;
@protocol AWETemplateTagsTemplateViewProtocol;

@interface AWEPlayInteractionTagsElementV2 : AWEPlayInteractionLeftElement <AWETemplateTagsTemplateViewDelegate, AWETemplateTagsViewModelDelegate, AWEFeedTagsPosPriorityAvoidElementProtocol, AWEUserMessage, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWETemplateTagsContext *tagContext;
@property (retain, nonatomic) UIView<AWETemplateTagsTemplateViewProtocol> *templateView;
@property (retain, nonatomic) AWETemplateTagsViewModel *viewModel;
@property (retain, nonatomic) AWETemplateTagsModel *tagsModel;
@property (retain, nonatomic) AWETemplateTagsMultiScheduler *tagsMultiScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (id)subTypeWithContext:(id)a0 strategies:(id)a1;
+ (BOOL)disableShowV2ElementOnPlaylet:(id)a0;
+ (id)activateInfoWithContext:(id)a0 tagID:(id)a1;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewDidAppear;
- (void)hideComponent;
- (void)setAppear:(BOOL)a0;
- (void)videoPlayerWillTrackPlayTime;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)prepareForActivate;
- (void)addNotifications;
- (void)videoPrivacyChanged:(id)a0;
- (void)didClickWithEvent:(id)a0;
- (void)didUpdateAfterTagReplace;
- (long long)elementPriority;
- (void)onHideFamiliarElementsNotification:(id)a0;
- (void)didTriggerViewUpdateEventWithModel:(id)a0;
- (void)didTriggerTagDelayedDisplay;
- (void)didTriggerTagRefreshEvent;
- (void)didTriggerTagHideEvent;
- (void)triggerTagDynamicRefreshEventWithTagID:(id)a0;
- (void)handleLikeEvent;
- (void)handleCancelLikeEvent;
- (void)updateContextWithModel:(id)a0;
- (void)updateTagWithModel:(id)a0;
- (void)doAnimationAfterTagReplace;
- (void)layoutTemplateView;
- (void)updateElementLayoutAfterTagReplace;
- (BOOL)tryUpdateTagsWithBusinessID:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)businessID;
- (void)dealloc;

@end
