@class NSArray, NSString;

@interface AFDBookDetailPageVideoListModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *videoList;
@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) long long nextOffset;
@property (nonatomic) BOOL hasMore;

+ (id)videoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
