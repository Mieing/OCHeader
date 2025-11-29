@class NSString, NSDictionary;

@interface BDPBindingSystemInfoResult : NSObject

@property (copy, nonatomic) NSString *brand;
@property (copy, nonatomic) NSString *model;
@property (nonatomic) double pixelRatio;
@property (nonatomic) double screenWidth;
@property (nonatomic) double screenHeight;
@property (nonatomic) double statusBarHeight;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *system;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSDictionary *safeArea;
@property (copy, nonatomic) NSString *SDKVersion;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSDictionary *deviceScore;

- (void).cxx_destruct;

@end
