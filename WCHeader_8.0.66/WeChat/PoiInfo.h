@interface PoiInfo : WXPBGeneratedMessage

@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned long long time;

+ (void)initialize;

@end
