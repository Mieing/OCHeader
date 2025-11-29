@class NSString;

@interface VoIPMPUserInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *avatarPath;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) int gender;
@property (nonatomic) BOOL isOpenIm;
@property (retain, nonatomic) NSString *subName;

+ (void)initialize;

@end
