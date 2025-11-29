@interface AWEDCFeedScrollFPSOptimizeConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enableCellSizeAutoLayoutOpt;
@property (nonatomic) BOOL enableCellImageGeneratePlaceholderOpt;
@property (nonatomic) BOOL enableEventDispatcherNoCacheFix;
@property (nonatomic) BOOL enableEventDispatcherPreloadCache;
@property (nonatomic) BOOL enableTrackerTooOftenOpt;
@property (nonatomic) BOOL enableTrackerExtraInfoDictTooOftenOpt;
@property (nonatomic) double throttleScrollViewYOffset;
@property (nonatomic) BOOL enableImageResourceViewOpt;

@end
