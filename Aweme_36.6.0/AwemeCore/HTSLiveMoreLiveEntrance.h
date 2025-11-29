@class NSString;

@interface HTSLiveMoreLiveEntrance : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long tabType;
@property (nonatomic) long long validTime;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *eventExtra;
@property (nonatomic) long long tabItemId;
@property (copy, nonatomic) NSString *tabItemName;
@property (copy, nonatomic) NSString *tabItemEvent;
@property (copy, nonatomic) NSString *guideType;
@property (nonatomic) int entranceType;
@property (nonatomic) long long shortTopicId;
@property (copy, nonatomic) NSString *shortTopicContent;
@property (nonatomic) long long topicId;
@property (copy, nonatomic) NSString *topicContent;

+ (id)descriptor;

@end
