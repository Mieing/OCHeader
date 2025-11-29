@class NSString, NSArray;

@interface AWEGeneralFilmTelevisionSeriesModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *cID;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *seriesArray;
@property (nonatomic) BOOL showDivideLine;

+ (id)seriesArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
