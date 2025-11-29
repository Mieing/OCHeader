@class NSString, NSDictionary, UTDDeviceInfo;

@interface UTMCGlobalVariables : NSObject

@property (retain) NSString *mChannel;
@property (retain) NSString *mNick;
@property (retain) NSString *mLongNick;
@property (retain) NSString *mUserId;
@property (retain) NSString *mLongUserId;
@property (retain) NSString *mDebugId;
@property (retain) UTDDeviceInfo *mDeviceInfo;
@property int mUploadLag;
@property BOOL mSyncOnlineConfStatus;
@property (retain, nonatomic) NSDictionary *mHostForEventidDict;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)getInstance;

- (id)getMHostForEventidDict;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
