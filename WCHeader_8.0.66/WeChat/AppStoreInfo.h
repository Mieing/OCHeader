@class NSString;

@interface AppStoreInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appUrl;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int topOffset;
@property (nonatomic) double topPercentage;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSString *shadowRgbHex;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double shadowDuration;
@property (nonatomic) unsigned int clipTopHeight;
@property (retain, nonatomic) NSString *extraData;
@property (nonatomic) unsigned int uiarea;
@property (nonatomic) unsigned int enableStatusCheck;

+ (void)initialize;

@end
