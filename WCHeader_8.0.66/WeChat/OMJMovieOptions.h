@class NSSet, OMJDimensionLevel;

@interface OMJMovieOptions : NSObject

@property (readonly, nonatomic) BOOL isLyricEnabled;
@property (readonly, nonatomic) BOOL isOSTMuted;
@property (readonly, nonatomic) BOOL isBGMMuted;
@property (readonly, nonatomic) BOOL shouldAdjustBlankTemplatePreviewOffset;
@property (readonly, nonatomic) float blankTemplatePreviewOffsetPercent;
@property (readonly, nonatomic) BOOL isVideoTranscodingOptimEnabled;
@property (readonly, nonatomic) OMJDimensionLevel *videoTranscodingOptimDimensionLevel;
@property (readonly, nonatomic) BOOL isAIAnalysisEnabled;
@property (readonly, nonatomic) float preprocTimeoutLimitSeconds;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxDuration;
@property (nonatomic) BOOL shouldAutoRecommendBGM;
@property (nonatomic) BOOL shouldRecommendBGMForRecommendedTemplates;
@property (nonatomic) BOOL shouldRetainOriginalMediaDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } retainOriginalMediaDurationThreshold;
@property (retain, nonatomic) NSSet *defaultTemplateIDs;

- (id)initWithIsLyricEnabled:(BOOL)a0 isOSTMuted:(BOOL)a1 isBGMMuted:(BOOL)a2;
- (id)initWithIsLyricEnabled:(BOOL)a0 isOSTMuted:(BOOL)a1 isBGMMuted:(BOOL)a2 shouldAdjustBlankTemplatePreviewOffset:(BOOL)a3 blankTemplatePreviewOffsetPercent:(float)a4;
- (id)initWithIsLyricEnabled:(BOOL)a0 isOSTMuted:(BOOL)a1 isBGMMuted:(BOOL)a2 shouldAdjustBlankTemplatePreviewOffset:(BOOL)a3 blankTemplatePreviewOffsetPercent:(float)a4 isVideoTranscodingOptimEnabled:(BOOL)a5 videoTranscodingOptimDimensionLevel:(id)a6 isAIAnalysisEnabled:(BOOL)a7 preprocTimeoutLimitSeconds:(float)a8;
- (id)description;
- (void).cxx_destruct;

@end
