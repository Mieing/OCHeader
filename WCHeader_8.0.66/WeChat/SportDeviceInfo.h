@class NSString;

@interface SportDeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) unsigned int stepCount;
@property (nonatomic) BOOL isAppleWatch;
@property (nonatomic) BOOL isWhiteList;
@property (nonatomic) BOOL isLocalIphone;

+ (void)initialize;

- (void)setIsLocalIphone:(BOOL)a0;
- (BOOL)isLocalIphone;
- (void)setIsWhiteList:(BOOL)a0;
- (BOOL)isWhiteList;
- (void)setIsAppleWatch:(BOOL)a0;
- (BOOL)isAppleWatch;
- (void)setStepCount:(unsigned int)a0;
- (unsigned int)stepCount;
- (void)setAppName:(id)a0;
- (id)appName;
- (void)setBundleId:(id)a0;
- (id)bundleId;

@end
