@class NSNumber, NSString, AWEURLModel;

@interface AWEAdModel : AWEBaseApiModel

@property (nonatomic) BOOL isPreview;
@property (retain, nonatomic) NSNumber *adID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSNumber *cptSeq;
@property (retain, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSString *openURL;
@property (retain, nonatomic) NSString *webURL;
@property (retain, nonatomic) NSString *webTitle;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSNumber *effectivePlayTime;
@property (nonatomic) long long videoTranspose;
@property (readonly, nonatomic) AWEURLModel *trackURLList;
@property (readonly, nonatomic) AWEURLModel *clickTrackURLList;
@property (readonly, nonatomic) AWEURLModel *playTrackURLList;
@property (readonly, nonatomic) AWEURLModel *playOverTrackURLList;
@property (readonly, nonatomic) AWEURLModel *effectivePlayTrackURLList;
@property (nonatomic) long long showMaskAfterPlayTimes;
@property (nonatomic) long long showLearnMoreAfterSeconds;

+ (id)trackURLListJSONTransformer;
+ (id)clickTrackURLListJSONTransformer;
+ (id)videoTransposeJSONTransformer;
+ (id)playTrackURLListJSONTransformer;
+ (id)playOverTrackURLListJSONTransformer;
+ (id)effectivePlayTrackURLListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
