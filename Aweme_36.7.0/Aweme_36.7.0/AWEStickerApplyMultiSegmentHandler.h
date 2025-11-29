@class NSArray, ACCPassThroughView, NSString, IESEffectModel, NSMutableArray, ACCStickerBlockApplyPredicate;

@interface AWEStickerApplyMultiSegmentHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber, ACCRecordPropServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) ACCPassThroughView *multiSegPropContainerView;
@property (retain, nonatomic) NSMutableArray *segViewArray;
@property (copy, nonatomic) NSArray *restoreClipArray;
@property (retain, nonatomic) ACCStickerBlockApplyPredicate *predicate;
@property (retain, nonatomic) IESEffectModel *propAlertRestore;
@property (nonatomic) BOOL isAlertShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)flowServiceDidMarkDuration:(double)a0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)flowServiceDidAddFragment:(id)a0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceWillEnterNextPageWithMode:(id)a0;
- (void)flowServiceDidEnterNextPageWithMode:(id)a0;
- (BOOL)propServiceShouldApplyProp:(id)a0 propSource:(long long)a1 propIndexPath:(id)a2;
- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)handlerDidBecomeActive;
- (BOOL)shouldApplyProp:(id)a0;
- (id)p_currentProp;
- (void)hideSegContainerView:(BOOL)a0;
- (void)layoutSegViews:(long long)a0;
- (void)p_sendRecordMessageToEffectWithType:(long long)a0 segNumber:(long long)a1;
- (void)updateSegViews:(id)a0;
- (void)setAllSegViewAlpha:(double)a0 startIndex:(long long)a1 endIndex:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
