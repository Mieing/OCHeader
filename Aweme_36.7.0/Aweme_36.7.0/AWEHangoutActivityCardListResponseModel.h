@class NSArray;

@interface AWEHangoutActivityCardListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *cardList;

+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
