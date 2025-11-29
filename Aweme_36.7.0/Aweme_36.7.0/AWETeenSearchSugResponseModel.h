@class NSString, NSArray;

@interface AWETeenSearchSugResponseModel : AWEBaseApiModel

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) NSArray *sugWordList;

+ (id)sugWordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
