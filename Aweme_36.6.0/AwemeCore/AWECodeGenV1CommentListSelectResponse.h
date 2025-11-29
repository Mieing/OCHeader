@class NSArray;

@interface AWECodeGenV1CommentListSelectResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *commentsModelArray;
@property (nonatomic) long long cursor;
@property (nonatomic) long long hasMore;
@property (nonatomic) long long total;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
