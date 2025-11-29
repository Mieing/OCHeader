@class NSArray, NSString;

@interface AWEMVMainFeedGuideRelatedResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSString *wholeItemIDList;
@property (nonatomic) long long waterMark;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
