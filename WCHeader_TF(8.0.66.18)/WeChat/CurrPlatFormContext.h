@class NSString;

@interface CurrPlatFormContext : WXPBGeneratedMessage

@property (nonatomic) unsigned int isVip;
@property (nonatomic) unsigned int isPay;
@property (nonatomic) unsigned int isLimitedFree;
@property (retain, nonatomic) NSString *songId;
@property (nonatomic) unsigned int isWxVip;
@property (nonatomic) unsigned int singleSongPayStatus;

+ (void)initialize;

@end
