@class NSString, MMListenUserInfo;

@interface MMListenMVInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singer;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *singerPic;
@property (retain, nonatomic) NSString *musicAppid;
@property (retain, nonatomic) NSString *musicWeburl;
@property (retain, nonatomic) NSString *musicMid;
@property (retain, nonatomic) MMListenUserInfo *finderMusician;

+ (void)initialize;

@end
