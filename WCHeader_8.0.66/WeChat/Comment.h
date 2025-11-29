@class NSString;

@interface Comment : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *msg;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int relation;
@property (nonatomic) unsigned int delFlag;

+ (void)initialize;

@end
