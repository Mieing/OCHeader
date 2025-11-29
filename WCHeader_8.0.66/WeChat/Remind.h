@class NSString, NSData;

@interface Remind : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *remindId;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int time;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSData *extInfo;
@property (nonatomic) unsigned int createTime;

+ (void)initialize;

@end
