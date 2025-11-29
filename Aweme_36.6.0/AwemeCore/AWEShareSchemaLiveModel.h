@class AWEShareSchemaLiveCoverModel, NSString, AWEShareSchemaEpisodeExtraModel, NSNumber;

@interface AWEShareSchemaLiveModel : AWEBaseApiModel

@property (nonatomic) long long status;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *anchorID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long userCount;
@property (retain, nonatomic) AWEShareSchemaLiveCoverModel *cover;
@property (retain, nonatomic) AWEShareSchemaEpisodeExtraModel *episodeExtra;

+ (id)coverJSONTransformer;
+ (id)episodeExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
