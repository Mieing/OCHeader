@class NSArray, AWEDemaciaPlayTokenAuthModel, NSNumber, AWEURLModel;

@interface AWEDemaciaVideoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *playURL;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) AWEURLModel *originCover;
@property (copy, nonatomic) NSArray *bitrateModels;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *isH265;
@property (retain, nonatomic) AWEDemaciaPlayTokenAuthModel *tokenAuth;
@property (retain, nonatomic) NSNumber *realDuration;

+ (id)coverURLJSONTransformer;
+ (id)playURLJSONTransformer;
+ (id)originCoverJSONTransformer;
+ (id)tokenAuthJSONTransformer;
+ (id)bitrateModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
