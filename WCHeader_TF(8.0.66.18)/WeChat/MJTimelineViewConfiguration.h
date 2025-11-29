@class NSArray;

@interface MJTimelineViewConfiguration : NSObject

@property (nonatomic) BOOL shouldShowTransitionPart;
@property (nonatomic) double storyline2AudialLaneSpacing;
@property (nonatomic) double timeRulerTopSpacing;
@property (nonatomic) double defaultTimelineScale;
@property (nonatomic) BOOL useNewTimelineSelectInteraction;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } trimHandleViewInsets;
@property (nonatomic) BOOL showAnchoredSegmentTrimHandleOverStoryline;
@property (nonatomic) BOOL isTransitionEditingEnabled;
@property (nonatomic) BOOL shouldResponseToSegmentInteraction;
@property (nonatomic) BOOL shouldTrimSnapToVisualAnchoredSegments;
@property (readonly, nonatomic) BOOL shouldShowMusicPlaceholder;
@property (readonly, nonatomic) BOOL shouldShowNarrationPlaceholder;
@property (readonly, nonatomic) BOOL shouldShowSnapMarksView;
@property (readonly, nonatomic) BOOL shouldShowAudialLaneBackground;
@property (readonly, nonatomic) BOOL shouldShowVolumeButton;
@property (readonly, nonatomic) BOOL shouldShowRecordButton;
@property (readonly, nonatomic) BOOL shouldShowOSTRecognitionRetryButton;
@property (readonly, nonatomic) BOOL isStorySegmentEditingEnabled;
@property (readonly, nonatomic) unsigned long long anchoredSegmentAutoFocusTargetType;
@property (readonly, nonatomic) unsigned long long anchoredSegmentAutoFocusBehaviorType;
@property (readonly, nonatomic) NSArray *visibleSegmentTypes;
@property (readonly, nonatomic) double storylineHeight;
@property (readonly, nonatomic) double audialLaneHeight;
@property (readonly, nonatomic) double visualLaneHeight;
@property (readonly, nonatomic) BOOL isAnchoredSegmentOverlapEnabled;

+ (id)defaultConfigurationForClipping;
+ (id)defaultConfigurationForTrimming;
+ (id)defaultConfigurationForNarration;
+ (id)defaultConfigurationForOSTRecognition;

- (id)initWithShouldShowMusicPlaceholder:(BOOL)a0 shouldShowNarrationPlaceholder:(BOOL)a1 shouldShowSnapMarksView:(BOOL)a2 shouldShowAudialLaneBackground:(BOOL)a3 shouldShowVolumeButton:(BOOL)a4 shouldShowRecordButton:(BOOL)a5 shouldShowOSTRecognitionRetryButton:(BOOL)a6 isStorySegmentEditingEnabled:(BOOL)a7 anchoredSegmentAutoFocusTargetType:(unsigned long long)a8 anchoredSegmentAutoFocusBehaviorType:(unsigned long long)a9 visibleSegmentTypes:(id)a10 storylineHeight:(double)a11 audialLaneHeight:(double)a12 visualLaneHeight:(double)a13 isAnchoredSegmentOverlapEnabled:(BOOL)a14;
- (BOOL)shouldShowSegmentWithType:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
