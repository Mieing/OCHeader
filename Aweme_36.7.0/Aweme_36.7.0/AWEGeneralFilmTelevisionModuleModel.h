@class NSString, NSArray;

@interface AWEGeneralFilmTelevisionModuleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *moduleArray;

+ (id)moduleArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
