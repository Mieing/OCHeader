@class NSString, NSMutableArray;

@interface VideoClassifyResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *visionTaskOutLabels;
@property (retain, nonatomic) NSMutableArray *visionTaskExceedsThreshold;
@property (retain, nonatomic) NSMutableArray *visionTaskOutScores;
@property (retain, nonatomic) NSMutableArray *audioTaskOutLabels;
@property (retain, nonatomic) NSMutableArray *audioTaskOutScores;
@property (retain, nonatomic) NSMutableArray *lastVersionOutScores;
@property (retain, nonatomic) NSMutableArray *embClusters;
@property (retain, nonatomic) NSMutableArray *embFeature;
@property (retain, nonatomic) NSString *multimodualModelId;

+ (id)videoClassifyResultFromOMJResult:(id)a0;
+ (void)initialize;

@end
