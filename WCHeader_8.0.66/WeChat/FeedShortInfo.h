@class NSString;

@interface FeedShortInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *feedDesc;
@property (retain, nonatomic) NSString *feedImage;
@property (nonatomic) unsigned long long feedTime;
@property (nonatomic) float mediaWidth;
@property (nonatomic) float mediaHeight;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int likeCount;
@property (retain, nonatomic) NSString *feedUrl;
@property (retain, nonatomic) NSString *feedUrlToken;

+ (void)initialize;

@end
