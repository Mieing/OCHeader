@class NSString;

@interface WxaCommentDishInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned int showTime;
@property (nonatomic) unsigned int showDuration;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *darkModeIconUrl;
@property (retain, nonatomic) NSString *recommendDishBuffer;

+ (void)initialize;

@end
