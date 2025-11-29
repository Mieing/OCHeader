@class NSArray;

@interface AWELunaAnchorRecommendInfoResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *recommendTracks;

+ (id)recommendTracksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
