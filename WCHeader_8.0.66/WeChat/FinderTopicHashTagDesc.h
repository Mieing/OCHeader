@class NSString;

@interface FinderTopicHashTagDesc : WXPBGeneratedMessage

@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSString *topicName;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (nonatomic) unsigned int feedCount;
@property (retain, nonatomic) NSString *joininTimesWording;
@property (retain, nonatomic) NSString *coverImgUrlToken;
@property (nonatomic) unsigned int isNeedPreload;

+ (void)initialize;

@end
