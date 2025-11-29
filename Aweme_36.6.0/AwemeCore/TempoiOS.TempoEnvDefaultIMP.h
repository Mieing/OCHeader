@interface TempoiOS.TempoEnvDefaultIMP : NSObject <TempoiOS.TempoEnvIMP> {
    void /* unknown type, empty encoding */ appDisplayName_;
    void /* unknown type, empty encoding */ appVersion_;
    void /* unknown type, empty encoding */ appVersionCode_;
    void /* unknown type, empty encoding */ buildVersion_;
    void /* unknown type, empty encoding */ buildVersionCode_;
    void /* unknown type, empty encoding */ osVersion_;
    void /* unknown type, empty encoding */ osVersionCode_;
    void /* unknown type, empty encoding */ platform_;
    void /* unknown type, empty encoding */ screenWidth_;
    void /* unknown type, empty encoding */ screenheight_;
    void /* unknown type, empty encoding */ templateSDKVersion_;
    void /* unknown type, empty encoding */ templateSDKVersionCode_;
}

- (long long)appVersionCode;
- (long long)buildVersionCode;
- (long long)osVersionCode;
- (double)screenheight;
- (id)templateSDKVersion;
- (long long)templateSDKVersionCode;
- (void).cxx_destruct;
- (id)buildVersion;
- (double)screenWidth;
- (id)init;
- (id)appVersion;
- (id)osVersion;
- (id)platform;
- (id)appDisplayName;

@end
