@class NSString;

@interface LiveConcertInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isConcertLive;
@property (retain, nonatomic) NSString *activityId;
@property (nonatomic) unsigned long long topicId;
@property (nonatomic) unsigned long long topicType;
@property (nonatomic) BOOL enableTopic;
@property (nonatomic) unsigned int hasTicket;

+ (void)initialize;

- (void)setHasTicket:(unsigned int)a0;
- (unsigned int)hasTicket;
- (void)setEnableTopic:(BOOL)a0;
- (BOOL)enableTopic;
- (void)setTopicType:(unsigned long long)a0;
- (unsigned long long)topicType;
- (void)setTopicId:(unsigned long long)a0;
- (unsigned long long)topicId;
- (void)setActivityId:(id)a0;
- (id)activityId;
- (void)setIsConcertLive:(BOOL)a0;
- (BOOL)isConcertLive;

@end
