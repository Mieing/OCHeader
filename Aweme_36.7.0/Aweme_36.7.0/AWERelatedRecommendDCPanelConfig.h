@class NSDictionary, NSString, NSArray;

@interface AWERelatedRecommendDCPanelConfig : NSObject

@property (class, nonatomic) BOOL enabled;
@property (class, nonatomic) BOOL smartPreloadEnable;
@property (class, nonatomic) long long defaultLoadMoreCount;
@property (class, nonatomic) long long defaultChapterCount;
@property (class, nonatomic) BOOL enableLimitDistance;
@property (class, nonatomic) BOOL enableDragWithHandEndAnimate;
@property (class, nonatomic) BOOL isRequestOnAirMarkEnabled;
@property (class, nonatomic) BOOL recommendPanelSoftAdFixEnable;
@property (class, nonatomic) BOOL isInnerFlowEntranceIDReseted;
@property (class, nonatomic) BOOL recommendPanelExposureExperimentEnable;
@property (class, nonatomic, copy) NSDictionary *recommendPanelAiTabsConfig;
@property (class, nonatomic) BOOL aiTabsEnabled;
@property (class, nonatomic) long long aiParseExpandType;
@property (class, nonatomic, copy) NSString *aiParseDesc;
@property (class, nonatomic) BOOL aiElementEnabled;
@property (class, nonatomic) BOOL multiTabsEnabled;
@property (class, nonatomic) BOOL aiTabsSpaceOptEnabled;
@property (class, nonatomic) long long parseElementOptStyle;
@property (class, nonatomic) long long noKeyWordTabStyle;
@property (class, nonatomic) BOOL autoExpandEnabled;
@property (class, nonatomic, copy) NSArray *aiElementAllowScene;
@property (class, nonatomic) BOOL enableKeepFoldedPanel;
@property (class, nonatomic) long long authorInfoPanelStyle;
@property (class, nonatomic) BOOL showBottomInterActionView;
@property (class, nonatomic) BOOL interactionElementEnabled;
@property (class, nonatomic) BOOL mentionedElementEnabled;
@property (class, nonatomic) BOOL chapterElementEnabled;
@property (class, nonatomic) BOOL navBarHeightChangeEnable;
@property (class, nonatomic) BOOL isMentionPreloadEnabled;
@property (class, nonatomic, copy) NSArray *relatedRecommendPanelEnableList;
@property (class, nonatomic) BOOL relatedRecommendRightDismissEnable;
@property (class, nonatomic) long long workingRangeThreshold;
@property (class, nonatomic) BOOL enablePanelFormat;

+ (BOOL)panelShowAnimateOptEnable;
+ (void)setPanelShowAnimateOptEnable:(BOOL)a0;
+ (double)panelShowDuration;
+ (void)setPanelShowDuration:(double)a0;
+ (double)panelDismissDuration;
+ (void)setPanelDismissDuration:(double)a0;
+ (BOOL)panelCoverShrinkEnable;
+ (void)setPanelCoverShrinkEnable:(BOOL)a0;
+ (BOOL)panelCoverPreloadEnable;
+ (void)setPanelCoverPreloadEnable:(BOOL)a0;
+ (long long)panelCoverPreloadCount;
+ (void)setPanelCoverPreloadCount:(long long)a0;
+ (BOOL)coverResolutionLowerEnable;
+ (void)setCoverResolutionLowerEnable:(BOOL)a0;
+ (double)threshold540p;
+ (void)setThreshold540p:(double)a0;
+ (double)threshold360p;
+ (void)setThreshold360p:(double)a0;
+ (double)targetResolution;
+ (long long)firstFetchCountWith:(BOOL)a0;
+ (double)heightWith:(id)a0;
+ (long long)elementConfigTypeWithModel:(id)a0 referString:(id)a1;
+ (void)registerAIParseOptExperiment;
+ (BOOL)hasRelatedRecommendSectionInPanelWith:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
