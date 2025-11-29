@interface BizAppMsgBaseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int appMsgId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int bigPic;
@property (nonatomic) BOOL hasExpanded;

+ (void)initialize;

@end
