@class NSString, NSArray;

@interface AWEGeneralFilmTelevisionSeriesModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *seriesArray;

+ (id)seriesArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
