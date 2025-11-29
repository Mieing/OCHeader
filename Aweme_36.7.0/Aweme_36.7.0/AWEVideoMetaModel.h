@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWEVideoMetaModel : AWEBaseApiModel

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
@property (copy, nonatomic) NSDictionary *meta;
@property (copy, nonatomic) NSDictionary *gearVqmInfo;
@property (copy, nonatomic) NSDictionary *volumeInfo;
@property (copy, nonatomic) NSArray *playTimeInfo;

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
