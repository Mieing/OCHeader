@class NSString, NSMutableDictionary, MMFinderLiveNotifyStyleHotSaleCommentPubbleCell;

@interface MMFinderLiveECHotSaleLikeAnimationCenter : NSObject <MMFinderLiveNumberAnimationLogicObserver>

@property (retain, nonatomic) NSMutableDictionary *localData;
@property (retain, nonatomic) NSMutableDictionary *numberLogics;
@property (weak, nonatomic) MMFinderLiveNotifyStyleHotSaleCommentPubbleCell *notifyCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateLocalForProductID:(unsigned long long)a0 type:(unsigned long long)a1 value:(unsigned long long)a2;
- (BOOL)receiveRuleInfo:(id)a0 withProductID:(unsigned long long)a1 fromDataSource:(unsigned long long)a2;
- (id)localForProductID:(unsigned long long)a0 type:(unsigned long long)a1;
- (void)changeNumberWithLogic:(id)a0;
- (void)receiveHintAnimationInfo:(id)a0 withProductID:(unsigned long long)a1 fromDataSource:(unsigned long long)a2;
- (void)onWillDisplayGoodsCell:(id)a0;
- (id)provideNumberAnimationLogicWithRuleInfo:(id)a0 ForProductID:(unsigned long long)a1;
- (void)finishWithLogic:(id)a0;
- (void).cxx_destruct;

@end
