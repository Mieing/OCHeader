@class NSString, AWEOneDayLifeStoryModel, AWEOneDayCommentHasMoreModel, AWEOneDayStoryViewerModel;

@interface AWEOneDayStoryWithCommentModel : AWEBaseApiModel

@property (retain, nonatomic) AWEOneDayLifeStoryModel *lifeStory;
@property (retain, nonatomic) AWEOneDayCommentHasMoreModel *commentHasMore;
@property (copy, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) AWEOneDayStoryViewerModel *viewerModel;

+ (id)lifeStoryJSONTransformer;
+ (id)commentHasMoreJSONTransformer;
+ (id)viewUserListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
