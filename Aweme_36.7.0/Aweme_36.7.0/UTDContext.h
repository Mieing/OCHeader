@class UTDSession, UTDDeviceInfo, NSMutableArray, UTDSDKInfo;

@interface UTDContext : NSObject {
    NSMutableArray *_sdkInfoArray;
}

@property (retain, nonatomic) UTDSDKInfo *sdkInfo;
@property (retain, nonatomic) UTDDeviceInfo *deviceInfo;
@property (retain, nonatomic) UTDSession *currentSession;

+ (id)sharedUTDContext;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)getDefaultSdkInfo;
- (void)putSdkInfoInArray:(id)a0;
- (BOOL)valid;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
