@class NSString, AWELiveLocalLifeCardInfoModel;
@protocol AWELiveLocalLifeExpoundCardComboAnimationDelegate;

@interface AWELiveLocalLifeExpoundCardComboAnimationManager : NSObject <AWELiveLocalLifeExpoundCardComboAnimationProtocol>

@property (retain, nonatomic) AWELiveLocalLifeCardInfoModel *currentCardModel;
@property (retain, nonatomic) AWELiveLocalLifeCardInfoModel *followCardModel;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL hadShowComboFlyOut;
@property (weak, nonatomic) id<AWELiveLocalLifeExpoundCardComboAnimationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSameGoodsWithModel:(id)a0;
- (void)showExpoundCardWithModel:(id)a0 from:(long long)a1;
- (void)closeExpoundCardWithReason:(long long)a0 sourceModel:(id)a1;
- (BOOL)hitTheAnimationTest;
- (BOOL)p_whetherCanShow;
- (BOOL)couldDoFirstFlyOutComboAnimation:(BOOL)a0;
- (void)p_startMotionAnimationIfNeeded;
- (void)checkNeedShowFollowExpoundCard:(BOOL)a0;
- (void)p_showExpoundCardAnimationCompletion:(id /* block */)a0;
- (void)p_startExpoundCardComboAimatedWithType:(long long)a0 completion:(id /* block */)a1;
- (BOOL)isExpoundCardAnimating;
- (long long)p_containerAnimationStatus;
- (void)p_updateExpoundCardWithModel:(id)a0 resetTimer:(BOOL)a1;
- (void)p_switchToNewExpoundCardAnimationWithModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)isExpoundCardDismissing;
- (void)p_dismissExpoundCardAnimationCompletion:(id /* block */)a0;
- (BOOL)isExpoundCardShowing;
- (long long)p_comboAnimationStatus;
- (void)p_expoundCardWillShowWithModel;
- (id)p_containerView;
- (void)p_expoundCardShouldRemoveWithModel;
- (id)p_componentManager;
- (void).cxx_destruct;

@end
