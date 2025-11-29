@class NSString, NSDictionary, NSArray, NSNumber;

@interface BDSimVideoMetaObject : MTLModel <MTLJSONSerializing, BDSimVideoMetaModel>

@property (retain, nonatomic) NSNumber *loudness;
@property (retain, nonatomic) NSNumber *peak;
@property (retain, nonatomic) NSNumber *qprf;
@property (retain, nonatomic) NSNumber *srScore;
@property (retain, nonatomic) NSNumber *vqScore;
@property (retain, nonatomic) NSNumber *srPotentialScore;
@property (copy, nonatomic) NSString *title_info;
@property (copy, nonatomic) NSString *danmakuMaskInfo;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *businessInfo;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *videoMeta;
@property (copy, nonatomic) NSDictionary *gearVqmInfo;
@property (copy, nonatomic) NSArray *playTimeInfo;
@property (copy, nonatomic) NSString *brightRatioMean;
@property (copy, nonatomic) NSString *diffOverexposureRatio;
@property (copy, nonatomic) NSString *overexposureRatioMean;
@property (copy, nonatomic) NSString *stdBrightness;
@property (copy, nonatomic) NSString *brightnessMean;
@property (copy, nonatomic) NSString *strategyTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *meta;

+ (id)metaJSONTransformer;
+ (id)volumeInfoJSONTransformer;
+ (id)srPotentialScoreJSONTransformer;
+ (id)gearVqmInfoJSONTransformer;
+ (id)playTimeInfoJSONTransformer;
+ (id)vqScoreJSONTransformer;
+ (id)loudnessJSONTransformer;
+ (id)peakJSONTransformer;
+ (id)qprfJSONTransformer;
+ (id)srScoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
