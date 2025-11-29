@class NSArray;

@interface AWENearbyRedEnvelopeListDataResponse : AWEBaseApiModel

@property (nonatomic) long long hasMore;
@property (retain, nonatomic) NSArray *feedList;
@property (nonatomic) long long nextOffset;

+ (id)feedListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
