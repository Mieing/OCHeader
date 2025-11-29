@class NSArray, NSString;

@interface AWETeenSearchGeneralResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *cardList;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) BOOL hasMore;

+ (id)hasMoreJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
