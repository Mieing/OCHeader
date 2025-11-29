@class NSArray, NSString;

@interface AWEIMMyContentFeedbackDigListModel : AWEBaseApiModel

@property (nonatomic) long long totalCounts;
@property (copy, nonatomic) NSArray *participants;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *replyText;

+ (id)participantsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
