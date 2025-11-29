@class NSString, CTTelephonyNetworkInfo, NSLock;

@interface UTDDeviceInfo : NSObject {
    NSLock *_lock;
}

@property (retain, nonatomic) NSString *channel;
@property (retain, nonatomic) NSString *SDKVersion;
@property (retain) NSString *mAppVersion;
@property (retain) NSString *mOsName;
@property (retain) NSString *mUtdid;
@property (retain) NSString *mImei;
@property (retain) NSString *mImsi;
@property (retain) NSString *mBrand;
@property (retain) NSString *mDeviceModel;
@property (retain) NSString *mResolution;
@property (retain) NSString *mCarrier;
@property (readonly) NSString *mAccess;
@property (readonly) NSString *mAccessSubType;
@property (retain) NSString *mLanguage;
@property (retain) NSString *mOsVersion;
@property (retain, nonatomic) CTTelephonyNetworkInfo *telephonyInfo;

+ (id)utdid;
+ (id)uniqueGlobalDeviceIdentifier;
+ (id)getUniqueID;
+ (id)macAddress;
+ (id)resolution;
+ (id)imei;
+ (id)platform;
+ (id)cpu;

- (id)getCarrierName;
- (id)getOsVersion;
- (id)networkAccess;
- (id)getNetworkSubType;
- (id)deviceInfo;
- (void).cxx_destruct;
- (id)init;

@end
