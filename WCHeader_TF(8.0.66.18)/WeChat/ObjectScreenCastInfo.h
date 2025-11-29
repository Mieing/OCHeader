@class NSString;

@interface ObjectScreenCastInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *videoUrl;
@property (nonatomic) unsigned long long expiredTime;

+ (void)initialize;

@end
