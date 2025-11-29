@class AWEOneDayLifeStoryModel, NSString, AWEOneDayCommentHasMoreModel;

@interface AWEOneDayStoryWithCommentModel : AWEBaseApiModel

@property (retain, nonatomic) AWEOneDayLifeStoryModel *lifeStory;
@property (retain, nonatomic) AWEOneDayCommentHasMoreModel *commentHasMore;
@property (copy, nonatomic) NSString *recommendReason;

+ (id)lifeStoryJSONTransformer;
+ (id)commentHasMoreJSONTransformer;
+ (id)viewUserListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
