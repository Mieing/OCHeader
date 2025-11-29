@class NSNumber, NSArray;

@interface AWEDiscoverDPlayletUserProfileTabListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *playletCardModelArray;

+ (id)playletCardModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
