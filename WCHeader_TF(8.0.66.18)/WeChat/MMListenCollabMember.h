@class MMListenUserInfo;

@interface MMListenCollabMember : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenUserInfo *user;
@property (nonatomic) int role;
@property (nonatomic) unsigned int collabId;

+ (void)initialize;

@end
