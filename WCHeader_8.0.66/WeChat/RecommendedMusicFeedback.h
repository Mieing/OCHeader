@class NSString;

@interface RecommendedMusicFeedback : WXPBGeneratedMessage

@property (nonatomic) unsigned int musidSid;
@property (nonatomic) unsigned int behaviorType;
@property (nonatomic) unsigned int behaviorValue;
@property (nonatomic) unsigned int behaviorTimestamp;
@property (nonatomic) unsigned long long searchReqId;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int index;

+ (void)initialize;

@end
