@class NSString;

@interface DistanceInfo : WXPBGeneratedMessage

@property (nonatomic) int duration;
@property (nonatomic) int pkgtype;
@property (retain, nonatomic) NSString *tmapMpAppid;
@property (retain, nonatomic) NSString *tmapMpUrl;

+ (void)initialize;

@end
