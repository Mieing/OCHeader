@class NSString;

@interface AnnieX.SLHybridSettingsConfig : NSObject {
    void /* unknown type, empty encoding */ __rts_aid;
    void /* unknown type, empty encoding */ __rts_host;
    void /* unknown type, empty encoding */ __rts_os;
    void /* unknown type, empty encoding */ __rts_osVersion;
    void /* unknown type, empty encoding */ __rts_installId;
    void /* unknown type, empty encoding */ __rts_deviceId;
    void /* unknown type, empty encoding */ __rts_channel;
    void /* unknown type, empty encoding */ __rts_versionCode;
    void /* unknown type, empty encoding */ __rts_updateVersionCode;
    void /* unknown type, empty encoding */ __rts_region;
    void /* unknown type, empty encoding */ __rts_language;
    void /* unknown type, empty encoding */ __rts_deviceModel;
    void /* unknown type, empty encoding */ __rts_sdkVersion;
    void /* unknown type, empty encoding */ __rts_deviceBrand;
}

@property (nonatomic, copy) NSString *aid;
@property (nonatomic, copy) NSString *host;
@property (nonatomic, copy) NSString *os;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, copy) NSString *installId;
@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, copy) NSString *channel;
@property (nonatomic, copy) NSString *versionCode;
@property (nonatomic, copy) NSString *updateVersionCode;
@property (nonatomic, copy) NSString *region;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *sdkVersion;
@property (nonatomic, copy) NSString *deviceBrand;

- (void).cxx_destruct;
- (id)init;

@end
