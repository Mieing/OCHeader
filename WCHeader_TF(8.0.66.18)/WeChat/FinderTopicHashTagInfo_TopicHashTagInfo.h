@class NSString, NSMutableArray;

@interface FinderTopicHashTagInfo_TopicHashTagInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int innerTabType;
@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSMutableArray *filter;

+ (void)initialize;

@end
