@class NSNumber, NSArray, NSString;

@interface AWEShowTheaterListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *awemeModels;
@property (retain, nonatomic) NSString *requestParams;

+ (id)awemeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
