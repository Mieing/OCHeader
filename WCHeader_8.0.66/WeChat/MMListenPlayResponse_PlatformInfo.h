@class NSString;

@interface MMListenPlayResponse_PlatformInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *songId;
@property (nonatomic) int isVip;
@property (nonatomic) int isPay;
@property (nonatomic) int isLimitFree;
@property (nonatomic) int isWxvip;
@property (retain, nonatomic) NSString *extInfo;

+ (void)initialize;

@end
