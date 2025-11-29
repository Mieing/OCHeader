@class NSArray;

@interface AWEMultiSongLiteResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *musics;

+ (id)musicsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
