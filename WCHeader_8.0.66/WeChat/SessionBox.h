@interface SessionBox : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int time;
@property (nonatomic) unsigned int pos;
@property (nonatomic) unsigned int reddotStatus;
@property (nonatomic) unsigned int visibleStatus;

+ (void)initialize;

@end
