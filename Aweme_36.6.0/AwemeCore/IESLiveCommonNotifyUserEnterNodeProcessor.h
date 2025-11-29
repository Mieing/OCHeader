@class NSMutableDictionary, IESLiveNotifyEffectMessageConfig;

@interface IESLiveCommonNotifyUserEnterNodeProcessor : IESLiveConsumeUserEnterNodeProcessor

@property (retain, nonatomic) NSMutableDictionary *comboNodeDictionary;
@property (retain, nonatomic) IESLiveNotifyEffectMessageConfig *frequencyConfig;
@property (retain, nonatomic) NSMutableDictionary *showTimeCountDictionary;
@property (retain, nonatomic) NSMutableDictionary *frequencyCountDictionary;
@property (retain, nonatomic) NSMutableDictionary *timeStampRecordDictionary;
@property (nonatomic) BOOL enableReplaceOpt;
@property (nonatomic) BOOL enableCombineTextAggregate;

- (void)setupFrequencyConfig;
- (id)transformToNativeSceneWithMessage:(id)a0;
- (id)transformToNativeBackgroundWithMessage:(id)a0;
- (BOOL)judgeIfAggregate:(id)a0;
- (BOOL)judgeIfSatisfyFrequencyConfig:(id)a0;
- (BOOL)hasFrequencyConfig:(BOOL)a0;
- (BOOL)judgeSceneCountWithMessage:(id)a0;
- (id)getSceneItemWithScene:(id)a0;
- (BOOL)judgeSubSceneCountWithMessage:(id)a0 scene:(id)a1;
- (id)getSubSceneItemWithScene:(id)a0 subSceneKey:(id)a1;
- (BOOL)judgeFrequencyByTimeGap:(long long)a0 maxNum:(long long)a1 isSubScene:(BOOL)a2 message:(id)a3;
- (void)increaseCount:(id)a0 withKey:(id)a1;
- (BOOL)isInValidTime:(id)a0;
- (BOOL)aggregateCombinedTextWithNodeSuccessfully:(id)a0;
- (BOOL)aggregateWithEnterNodeSuccessfully:(id)a0;
- (BOOL)handleComboNode:(id)a0;
- (void)downloadImagesWith:(id)a0 completion:(id /* block */)a1;
- (id)getNeedDownloadImagesWith:(id)a0;
- (void)trackViewDidClickedWithNode:(id)a0;
- (void)trackAnchorSpecialMessageShow:(id)a0;
- (id)createNodeWithMessage:(id)a0;
- (BOOL)enableUserEnterWithMessage:(id)a0;
- (BOOL)enablePopNode:(id)a0;
- (void)nodeDidConsumed:(id)a0;
- (BOOL)replaceNodeIfNeed:(id)a0;
- (void)clearComboNodeDataWithSeq:(id)a0;
- (id)checkNextComboNode:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameWithNode:(id)a0;
- (void)createNodeViewWithNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)nodeViewDidClickedWithNode:(id)a0;
- (void)nodeViewDidAddedToContainerWithNode:(id)a0;
- (void)nodeViewDismissedWithNode:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
