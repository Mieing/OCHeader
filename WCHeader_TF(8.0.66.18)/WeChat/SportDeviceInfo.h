@class NSString;

@interface SportDeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) unsigned int stepCount;
@property (nonatomic) BOOL isAppleWatch;
@property (nonatomic) BOOL isWhiteList;
@property (nonatomic) BOOL isLocalIphone;

+ (void)initialize;

@end
