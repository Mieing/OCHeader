@class NSString;

@interface FinderLbsLocation : WXPBGeneratedMessage

@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) int precision;
@property (retain, nonatomic) NSString *macAddr;
@property (retain, nonatomic) NSString *cellId;
@property (nonatomic) int gpsSource;

+ (void)initialize;

@end
