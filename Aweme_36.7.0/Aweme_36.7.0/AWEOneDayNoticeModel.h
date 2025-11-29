@class AWECommentModel, NSString, AWEOneDayLifeStoryModel, NSMutableArray, NSNumber;

@interface AWEOneDayNoticeModel : AWEBaseApiModel

@property (retain, nonatomic) AWEOneDayLifeStoryModel *lifeStoryModel;
@property (retain, nonatomic) NSMutableArray *fromUser;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *mergeCount;
@property (nonatomic) BOOL isExpired;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (retain, nonatomic) NSString *descAndTime;

+ (id)commentModelJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)lifeStoryModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
