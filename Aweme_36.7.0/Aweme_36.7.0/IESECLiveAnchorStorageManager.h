@interface IESECLiveAnchorStorageManager : NSObject

@property (nonatomic) BOOL hasShownExplainProductReplayGuide;

+ (id)shared;

- (BOOL)askExplainGuideEverShowWithUID:(id)a0;
- (void)setAskExplainGuideEverShow:(BOOL)a0 withUID:(id)a1;
- (BOOL)hasShownSettingSubHintWithName:(id)a0 withUID:(id)a1;
- (void)setHasShownSettingSubHint:(BOOL)a0 withName:(id)a1 withUID:(id)a2;
- (BOOL)hasShownAnchorSettingGuideWithUID:(id)a0;
- (void)setHasShownAnchorSettingGuide:(BOOL)a0 withUID:(id)a1;
- (id)getSettingGuideBubbleDataWithUID:(id)a0;
- (void)setSettingsGuideBubbleDataWithUID:(id)a0 bubbleDataDic:(id)a1;

@end
