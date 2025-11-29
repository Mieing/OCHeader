@class NSString;

@interface MusicEditButtonV2 : GPBMessage

@property (copy, nonatomic) NSString *exceedExpireReason;
@property (nonatomic) BOOL hasExceedExpireReason;
@property (nonatomic) BOOL inMusicEditExpire;
@property (nonatomic) BOOL hasInMusicEditExpire;

+ (id)descriptor;

@end
