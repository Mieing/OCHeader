@class NSArray, NSDictionary;

@interface OMJVideoAnalysisResult : NSObject

@property (readonly, nonatomic) NSArray *visionTaskOutLabels;
@property (readonly, nonatomic) NSArray *visionTaskExceedsThreshold;
@property (readonly, nonatomic) NSArray *visionTaskOutScores;
@property (readonly, nonatomic) NSArray *audioTaskOutLabels;
@property (readonly, nonatomic) NSArray *audioTaskOutScores;
@property (readonly, nonatomic) NSArray *lastVersionOutScores;
@property (readonly, nonatomic) NSDictionary *clusters;
@property (readonly, nonatomic) NSArray *embeddingFeature;

- (id)initWithVisionTaskOutLabels:(id)a0 visionTaskExceedsThreshold:(id)a1 visionTaskOutScores:(id)a2 audioTaskOutLabels:(id)a3 audioTaskOutScores:(id)a4 lastVersionOutScores:(id)a5 clusters:(id)a6 embeddingFeature:(id)a7;
- (void).cxx_destruct;

@end
