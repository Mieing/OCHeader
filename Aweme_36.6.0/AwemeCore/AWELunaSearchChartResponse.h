@class NSArray;

@interface AWELunaSearchChartResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *songs;

+ (id)songsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
