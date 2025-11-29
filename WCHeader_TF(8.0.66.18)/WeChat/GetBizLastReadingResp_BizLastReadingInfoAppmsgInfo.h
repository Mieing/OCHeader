@class NSString;

@interface GetBizLastReadingResp_BizLastReadingInfoAppmsgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizImg;
@property (retain, nonatomic) NSString *bizUrl;
@property (retain, nonatomic) NSString *bizTitle;
@property (retain, nonatomic) NSString *bizName;
@property (nonatomic) unsigned int readTime;
@property (nonatomic) unsigned int delType;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *bizUin;
@property (nonatomic) unsigned int appmsgId;
@property (nonatomic) unsigned int itemId;

+ (void)initialize;

@end
