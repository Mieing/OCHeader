@class NSString;

@interface WxaCommentInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *scoreStr;
@property (nonatomic) unsigned int showTime;
@property (nonatomic) unsigned int showDuration;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *darkModeIconUrl;

+ (void)initialize;

@end
