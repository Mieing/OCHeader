@class NSArray, NSString;

@interface AFDInnerBookResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *bookAwemeList;
@property (copy, nonatomic) NSString *watchBookID;
@property (nonatomic) long long watchOffset;
@property (nonatomic) long long bookOffset;
@property (nonatomic) BOOL hasMore;

+ (id)bookAwemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
