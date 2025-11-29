@class NSString;

@interface MegaVideoBulletCommentInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long videoTimestamp;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int extFlag;

+ (void)initialize;

@end
