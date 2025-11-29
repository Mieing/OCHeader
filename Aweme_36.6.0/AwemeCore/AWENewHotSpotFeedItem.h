@class AWECommentModel, NSString, NSArray, AWEAwemeModel, AWENewHotSpotFeedLynxCardConfig, NSNumber, AWENewHotSpotCommentVoteInfo;

@interface AWENewHotSpotFeedItem : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *uniqueID;
@property (copy, nonatomic) NSString *rawData;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSArray *commentList;
@property (retain, nonatomic) AWECommentModel *commentInfo;
@property (retain, nonatomic) NSArray *commentInfos;
@property (retain, nonatomic) NSArray *discussList;
@property (retain, nonatomic) AWENewHotSpotFeedLynxCardConfig *config;
@property (copy, nonatomic) NSString *pureText;
@property (retain, nonatomic) NSArray *textExtras;
@property (retain, nonatomic) NSNumber *interactionTime;
@property (copy, nonatomic) NSString *interactionDesc;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSArray *awemeListForHunter;
@property (retain, nonatomic) AWENewHotSpotCommentVoteInfo *voteInfo;
@property (copy, nonatomic) NSArray *extendDiscussionList;

+ (id)awemeJSONTransformer;
+ (id)textExtrasJSONTransformer;
+ (id)commentListJSONTransformer;
+ (id)commentInfosJSONTransformer;
+ (id)commentInfoJSONTransformer;
+ (id)discussListJSONTransformer;
+ (id)awemeListForHunterJSONTransformer;
+ (id)extendDiscussionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
