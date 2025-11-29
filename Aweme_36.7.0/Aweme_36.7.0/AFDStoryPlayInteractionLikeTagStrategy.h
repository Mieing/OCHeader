@class AFDStoryPlayInteractionLikeTagView;

@interface AFDStoryPlayInteractionLikeTagStrategy : AFDTemplateTagsBaseStrategy

@property (retain, nonatomic) AFDStoryPlayInteractionLikeTagView *contentView;

+ (BOOL)shouldHandleReplaceTriggerEvent:(id)a0;
+ (id)clientBusinessID;
+ (long long)handleTypeForReplaceTriggerEvent;
+ (id)generateModelForReplaceTriggerEvent:(id)a0;
+ (BOOL)canResponseLikeEventWithModel:(id)a0;
+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (void)viewController_willDisplay;
- (void)didInitializeView;
- (void)didTriggerEvent:(id)a0;
- (BOOL)shouldShowReplaceAnimation;
- (void)didUpdateAfterTagReplace;
- (void)handleLikeEvent;
- (void)handleCancelLikeEvent;
- (void)reloadDataAfterDiggListUpdate:(id)a0;
- (id)generateLikeTagModelWithAwemeModel:(id)a0;
- (id)likeTextWithDiggList:(id)a0 totalCount:(long long)a1;
- (id)userNameWithModel:(id)a0 maxCharacter:(long long)a1;
- (void)addLikeUser;
- (void)removeLikeUser;
- (void)didClickLikeTag;
- (void)reloadData;
- (void).cxx_destruct;
- (void)reset;
- (id)customView;
- (void)dealloc;
- (void)didInitialize;

@end
