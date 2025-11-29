@interface PoiGps : WXPBGeneratedMessage

@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int precision;

+ (void)initialize;

@end
