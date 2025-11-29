@class NSDictionary, NSNumber, NSString;

@interface BDXDefaultGlobalProps : NSObject

@property (copy, nonatomic) NSDictionary *defaultGlobalPropsCache;
@property (copy, nonatomic) NSDictionary *lynxGlobalPropsCache;
@property (retain, nonatomic) NSNumber *screenWidth;
@property (retain, nonatomic) NSNumber *screenHeight;
@property (retain, nonatomic) NSNumber *statusBarHeight;
@property (retain, nonatomic) NSNumber *bottomHeight;
@property (retain, nonatomic) NSNumber *topHeight;
@property (retain, nonatomic) NSNumber *contentHeight;
@property (retain, nonatomic) NSNumber *contentWidth;
@property (retain, nonatomic) NSNumber *containerHeight;
@property (retain, nonatomic) NSNumber *containerWidth;
@property (retain, nonatomic) NSNumber *safeAreaHeight;
@property (copy, nonatomic) NSDictionary *safeArea;
@property (retain, nonatomic) NSNumber *density;
@property (retain, nonatomic) NSNumber *isIPhoneX;
@property (retain, nonatomic) NSNumber *isGLES3Support;
@property (retain, nonatomic) NSNumber *isAccessable;
@property (retain, nonatomic) NSNumber *is32;
@property (retain, nonatomic) NSNumber *isPad;
@property (retain, nonatomic) NSNumber *isLandscape;
@property (copy, nonatomic) NSString *os;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *bulletVersion;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *deviceBrand;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSNumber *platformType;
@property (copy, nonatomic) NSString *screenOrientation;
@property (copy, nonatomic) NSString *lynxVersion;

- (void)saveDefautlGlobalProps;
- (id)defaultGlobalPropsDict;
- (struct CGSize { double x0; double x1; })p_keyWindowSize;
- (id)p_updateStatusBarHeight;
- (id)p_updateTopHeight;
- (id)p_updateSafeArea;
- (id)defaultGlobalPropsDictWithEngineType:(id)a0;
- (void)updateWithScreenOrientationDidChange;
- (void).cxx_destruct;
- (id)init;

@end
