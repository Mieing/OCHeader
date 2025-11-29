@class NSString, NSMutableArray, MMListenCircleTopicItem_InteractInfo;

@interface MMListenCircleTopicItem : WXPBGeneratedMessage

@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *activeUsers;
@property (retain, nonatomic) NSString *activeUserDesc;
@property (retain, nonatomic) MMListenCircleTopicItem_InteractInfo *interactInfo;

+ (void)initialize;

@end
