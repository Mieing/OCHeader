@class AWEDCFeedCellTagConfig, AWEDCFeedCellCommonLynxConfig, AWEDCFeedCellDescriptionConfig, AWEDCFeedCellCoverConfig, AWEDCFeedCellCreationInfoConfig, AWEDCFeedCellLiveConfig;

@interface AWEDCFeedCellConfig : AWEDCFeedBaseConfig

@property (retain, nonatomic) AWEDCFeedCellCoverConfig *coverConfig;
@property (retain, nonatomic) AWEDCFeedCellTagConfig *tagConfig;
@property (retain, nonatomic) AWEDCFeedCellDescriptionConfig *descriptionConfig;
@property (retain, nonatomic) AWEDCFeedCellCreationInfoConfig *creationInfoConfig;
@property (retain, nonatomic) AWEDCFeedCellLiveConfig *liveConfig;
@property (retain, nonatomic) AWEDCFeedCellCommonLynxConfig *commonLynxConfig;
@property (nonatomic) double cellCornerRadius;
@property (copy, nonatomic) id /* block */ shouldShowTapGuideBlock;
@property (copy, nonatomic) id /* block */ shouldPerformLongPressActionBlock;
@property (nonatomic) double cellWidth;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
