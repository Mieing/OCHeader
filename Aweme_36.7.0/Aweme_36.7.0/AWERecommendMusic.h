@class AWEMusicModel, NSString;

@interface AWERecommendMusic : AWEBaseApiModel

@property (retain, nonatomic) AWEMusicModel *music;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *schema;

+ (id)musicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
