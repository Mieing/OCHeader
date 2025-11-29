@class NSString;

@interface ForcePushItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *forcePushId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int expiredTime;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *userIcon;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *extinfo;

+ (void)initialize;

@end
