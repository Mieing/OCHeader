@class NSString;

@interface MusicLiveLikeReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songid;
@property (nonatomic) unsigned long long msgid;
@property (nonatomic) BOOL like;

+ (void)initialize;

@end
