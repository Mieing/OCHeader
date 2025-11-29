@class NSString, NSMutableDictionary, HTSLiveText;

@interface HTSLiveCustomTopic : IESLivePBBaseMessage

@property (nonatomic) long long shortTopicId;
@property (copy, nonatomic) NSString *shortTopicContent;
@property (nonatomic) long long longTopicId;
@property (copy, nonatomic) NSString *longTopicContent;
@property (nonatomic) long long createTime;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long userCount;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long mountCount;
@property (nonatomic) long long hotScore;
@property (nonatomic) long long topicType;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *shortTopicIdStr;
@property (copy, nonatomic) NSString *longTopicIdStr;
@property (nonatomic) double finalSortScore;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
