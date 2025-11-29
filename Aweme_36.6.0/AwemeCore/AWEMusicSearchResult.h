@class AWEMediaModel;

@interface AWEMusicSearchResult : AWEBaseApiModel

@property (retain, nonatomic) AWEMediaModel *media;

+ (id)mediaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
