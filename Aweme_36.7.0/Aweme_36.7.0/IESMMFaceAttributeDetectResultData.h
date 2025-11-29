@class NSMutableArray;

@interface IESMMFaceAttributeDetectResultData : IESMMAlgorithmResultData

@property (nonatomic) double age;
@property (nonatomic) double boyProb;
@property (nonatomic) double attractive;
@property (nonatomic) double happyScore;
@property (nonatomic) double realFaceProb;
@property (nonatomic) double quality;
@property (nonatomic) double arousal;
@property (nonatomic) double valence;
@property (nonatomic) double sadScore;
@property (nonatomic) double angryScore;
@property (nonatomic) double surpriseScore;
@property (nonatomic) double maskProb;
@property (nonatomic) double wearHatProb;
@property (nonatomic) double mustacheProb;
@property (nonatomic) double lipstickProb;
@property (nonatomic) double wearGlassProb;
@property (nonatomic) double wearSunglassProb;
@property (nonatomic) double blurScore;
@property (nonatomic) double illumination;
@property (nonatomic) long long expressionType;
@property (retain, nonatomic) NSMutableArray *expProbs;

- (void).cxx_destruct;
- (id)init;

@end
