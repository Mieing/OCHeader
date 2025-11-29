@class NSString, MMListenSingerInfo;

@interface MMListenCircleUserInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) MMListenSingerInfo *singerInfo;

+ (void)initialize;

@end
