@class NSArray, AWEAdFeedCommentsAdInfo, NSString;

@interface AWEAdFeedCommentsListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *commentList;
@property (copy, nonatomic) NSArray *filterList;
@property (retain, nonatomic) AWEAdFeedCommentsAdInfo *adInfo;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *tip;

+ (id)commentListJSONTransformer;
+ (id)filterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
