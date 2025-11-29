@class NSString;

@interface MMListenRecommendInfo_StatisticsData : WXPBGeneratedMessage

@property (nonatomic) unsigned int canShow;
@property (nonatomic) unsigned long long likeCount;
@property (nonatomic) unsigned long long playCount;
@property (retain, nonatomic) NSString *statRichText;

+ (void)initialize;

@end
