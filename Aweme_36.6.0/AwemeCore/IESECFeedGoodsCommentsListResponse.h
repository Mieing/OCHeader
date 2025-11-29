@class NSArray, NSString, NSNumber;

@interface IESECFeedGoodsCommentsListResponse : IESECBaseApiModel

@property (copy, nonatomic) NSArray *commentList;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *noticeDesc;
@property (retain, nonatomic) NSNumber *noticePosition;
@property (retain, nonatomic) NSNumber *totalCount;
@property (copy, nonatomic) NSString *insertIds;
@property (retain, nonatomic) NSNumber *meaninglessCount;

+ (id)commentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
