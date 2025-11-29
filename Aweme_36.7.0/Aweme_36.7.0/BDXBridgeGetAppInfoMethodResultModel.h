@class NSString, NSNumber, BDXBridgeGetAppInfoSafeArea;

@interface BDXBridgeGetAppInfoMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *installID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) BOOL isTeenMode;
@property (nonatomic) BOOL isBaseMode;
@property (copy, nonatomic) NSString *appTheme;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSNumber *statusBarHeight;
@property (copy, nonatomic) NSString *devicePlatform;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *netType;
@property (copy, nonatomic) NSString *networkType;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (copy, nonatomic) NSString *carrier;
@property (nonatomic) BOOL is32Bit;
@property (copy, nonatomic) NSString *idfa;
@property (retain, nonatomic) NSNumber *screenWidth;
@property (retain, nonatomic) NSNumber *screenHeight;
@property (retain, nonatomic) BDXBridgeGetAppInfoSafeArea *safeArea;
@property (nonatomic) long long screenOrientation;

+ (id)screenOrientationJSONTransformer;
+ (id)safeAreaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
