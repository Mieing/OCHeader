@class InteractiveUserInfo;

@interface InteractiveInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int appmsgid;
@property (nonatomic) unsigned int idx;
@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) InteractiveUserInfo *userInfo;
@property (nonatomic) BOOL lastRead;

+ (void)initialize;

@end
