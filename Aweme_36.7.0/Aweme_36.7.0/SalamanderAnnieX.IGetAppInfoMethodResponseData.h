@class NSString, _TtC16SalamanderAnnieX18GetAppInfoSafeArea;

@interface SalamanderAnnieX.IGetAppInfoMethodResponseData : NSObject {
    void /* function */ appID;
    void /* function */ installID;
    void /* function */ appName;
    void /* function */ appVersion;
    void /* function */ updateVersionCode;
    void /* function */ channel;
    void /* function */ language;
    void /* unknown type, empty encoding */ isTeenMode;
    void /* unknown type, empty encoding */ isBaseMode;
    void /* function */ appTheme;
    void /* function */ deviceID;
    void /* function */ osVersion;
    void /* unknown type, empty encoding */ statusBarHeight;
    void /* function */ devicePlatform;
    void /* function */ deviceModel;
    void /* function */ netType;
    void /* function */ networkType;
    void /* function */ carrier;
    void /* unknown type, empty encoding */ is32Bit;
    void /* unknown type, empty encoding */ screenWidth;
    void /* unknown type, empty encoding */ screenHeight;
    void /* function */ screenOrientation;
    void /* function */ idfa;
}

@property (nonatomic, copy) NSString *appID;
@property (nonatomic, copy) NSString *installID;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, copy) NSString *updateVersionCode;
@property (nonatomic, copy) NSString *channel;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *appTheme;
@property (nonatomic, copy) NSString *deviceID;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, copy) NSString *devicePlatform;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *netType;
@property (nonatomic, copy) NSString *networkType;
@property (nonatomic, copy) NSString *carrier;
@property (nonatomic, copy) NSString *screenOrientation;
@property (nonatomic, copy) NSString *idfa;
@property (nonatomic, retain) _TtC16SalamanderAnnieX18GetAppInfoSafeArea *safeArea;

- (void).cxx_destruct;
- (id)init;

@end
