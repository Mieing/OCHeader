@class NSString, FinderLiveAppMsgOption, MusicLiveMsg;

@interface MusicLiveMsgPack : WXPBGeneratedMessage

@property (retain, nonatomic) MusicLiveMsg *msg;
@property (retain, nonatomic) NSString *fromHeadimgurl;
@property (retain, nonatomic) NSString *fromNickname;
@property (nonatomic) unsigned long long msgid;
@property (retain, nonatomic) NSString *climsgid;
@property (retain, nonatomic) NSString *songid;
@property (nonatomic) unsigned int createtime;
@property (nonatomic) unsigned int isMyPost;
@property (nonatomic) unsigned long long mvId;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *mvPostNickname;
@property (retain, nonatomic) FinderLiveAppMsgOption *option;

+ (void)initialize;

@end
