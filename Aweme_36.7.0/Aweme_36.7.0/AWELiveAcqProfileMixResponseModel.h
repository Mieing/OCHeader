@class NSNumber, NSArray;

@interface AWELiveAcqProfileMixResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *mixInfos;

+ (id)mixInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
