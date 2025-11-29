@class NSArray;

@interface AWECodeGenCommentReplyListConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *replyListModelArray;
@property (nonatomic) long long cursor;
@property (nonatomic) long long total;
@property (nonatomic) long long hasMore;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
