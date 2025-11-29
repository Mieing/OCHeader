@class AFDStoryDiverseDiggContext, NSArray, NSMutableSet;
@protocol AFDStoryDiverseDiggBottomBarNormalLikeDelegate, AWEIMCustomQuickReplyControllerHandlerPortocol, AWEPlayInteractionLikeElementViewModelProtocol;

@interface AFDStoryDiverseDiggViewModel : NSObject

@property (retain, nonatomic) AFDStoryDiverseDiggContext *context;
@property (retain, nonatomic) id<AWEIMCustomQuickReplyControllerHandlerPortocol> imCustomQuickReplyHandler;
@property (copy, nonatomic) NSArray *diverseDiggModels;
@property (retain, nonatomic) NSMutableSet *trackExposureIDs;
@property (retain, nonatomic) id<AWEPlayInteractionLikeElementViewModelProtocol> currentLikeViewModel;
@property (weak, nonatomic) id<AFDStoryDiverseDiggBottomBarNormalLikeDelegate> normalLikeDelegate;

- (id)commonParams;
- (void)reportAllDiggAction;
- (id)buildDiverseDiggModel;
- (void)didShowMsgInputView;
- (void)didShowDiverseDiggWithID:(id)a0;
- (void)didClickMsgInputView;
- (void)didClickDiverseDiggWithID:(id)a0;
- (void)onLikeTappedWithCell:(id)a0 interactionController:(id)a1;
- (void)triggerLoopCurrentContent;
- (void)awemeDiggWith:(id)a0 userDigged:(BOOL)a1;
- (id)buildDiverseDiggCellModels:(id)a0;
- (id)msgInputViewText;
- (id)diverseDiggClickType;
- (void)trackEventForMessageInputViewShow;
- (id)createQuickReplyController;
- (void)trackEventForMessageInputViewClick;
- (void)trackEventForDiverseDiggShowWithActionID:(id)a0;
- (id)diggModelWithActionID:(id)a0;
- (void)resetDebounceTimer;
- (BOOL)shouldReportAllDiggAction;
- (id)buildDiverseDiggReqModel;
- (void)resetAllDiverseDiggCount;
- (void)requestFamiliarVideoDiverseDiggApiWithModels:(id)a0;
- (void)trackEventForDiverseDiggClickWithModels:(id)a0;
- (void)trackEventForLikeEvent;
- (void)setDiverseDiggModel:(id)a0 withIndex:(long long)a1;
- (double)reportDelayTimeInterval;
- (unsigned long long)diggModelIndexWithActionID:(id)a0;
- (id)diverseDiggJsonStringWithModels:(id)a0;
- (unsigned long long)diverseDiggClickTotalCountWithModels:(id)a0;
- (unsigned long long)diverseDiggClickDistinctCountWithModels:(id)a0;
- (long long)diverseDiggModelIndex:(id)a0;
- (id)likeViewModelWithAweme:(id)a0;
- (void)likeActionWithStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateWithContext:(id)a0;

@end
