@class NSString;

@interface LbsLocation : WXPBGeneratedMessage

@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) int precision;
@property (retain, nonatomic) NSString *macAddr;
@property (retain, nonatomic) NSString *cellId;
@property (nonatomic) int gpssource;

+ (void)initialize;

@end
