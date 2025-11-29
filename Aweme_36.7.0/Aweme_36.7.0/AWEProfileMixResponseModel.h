@class NSNumber, NSArray, NSDictionary;

@interface AWEProfileMixResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *mixInfos;
@property (retain, nonatomic) NSDictionary *logPb;

+ (id)mixInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
