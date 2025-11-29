@class NSString, NSArray;

@interface AWEGeneralFilmTelevisionModuleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *cID;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *moduleArray;
@property (nonatomic) BOOL showDivideLine;

+ (id)moduleArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
