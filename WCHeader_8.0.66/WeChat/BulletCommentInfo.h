@class NSString, BulletCommentContentInfo, BulletCommentDisplayInfo;

@interface BulletCommentInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long videoTimestamp;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned int identity;
@property (nonatomic) unsigned int feedPlayTimes;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int likeFlag;
@property (retain, nonatomic) BulletCommentContentInfo *contentInfo;
@property (retain, nonatomic) NSString *reportJson;
@property (nonatomic) unsigned int displayType;
@property (retain, nonatomic) BulletCommentDisplayInfo *displayInfo;

+ (void)initialize;

@end
