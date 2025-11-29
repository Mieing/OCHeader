@class NSString;

@interface LbsLocationNew : WXPBGeneratedMessage

@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) int precision;
@property (retain, nonatomic) NSString *macAddr;
@property (retain, nonatomic) NSString *cellId;
@property (nonatomic) int gpssource;
@property (retain, nonatomic) NSString *address;
@property (nonatomic) unsigned int addrFlag;
@property (nonatomic) unsigned int updateTime;

+ (void)initialize;

@end
