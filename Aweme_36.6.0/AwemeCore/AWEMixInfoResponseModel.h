@class NSNumber, NSArray;

@interface AWEMixInfoResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *mixInfos;
@property (retain, nonatomic) NSNumber *total;

+ (id)mixInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
