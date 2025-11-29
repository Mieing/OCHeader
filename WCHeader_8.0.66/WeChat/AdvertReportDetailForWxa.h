@interface AdvertReportDetailForWxa : WXPBGeneratedMessage

@property (nonatomic) unsigned int pageX;
@property (nonatomic) unsigned int pageY;
@property (nonatomic) unsigned int screenX;
@property (nonatomic) unsigned int screenY;
@property (nonatomic) unsigned int adNumber;
@property (nonatomic) unsigned int adUnitNumber;
@property (nonatomic) unsigned int adIndex;
@property (nonatomic) unsigned long long pageEnterTime;
@property (nonatomic) unsigned int phoneScreenWidth;
@property (nonatomic) unsigned int phoneScreenHeight;

+ (void)initialize;

@end
