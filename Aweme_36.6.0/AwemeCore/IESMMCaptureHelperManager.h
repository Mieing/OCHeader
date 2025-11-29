@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IESMMCaptureHelperManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prewarmedQueue;
@property (retain, nonatomic) NSArray *prewarmedFrontDevices;
@property (retain, nonatomic) NSArray *prewarmedBackDevices;
@property (nonatomic) BOOL isPrewarmed;
@property BOOL isPreheat;
@property (retain, nonatomic) NSString *currentDeviceModel;
@property (nonatomic) long long deviceBigVersion;
@property (retain) NSArray *macroPhotoFallbackDeviceList;

+ (id)sharedInstance;

- (void)getDeviceInfo;
- (void)prewarmVideoDevice;
- (void)p_preheatCaptureResources;
- (id)p_videoDeviceWithPosition:(long long)a0;
- (id)p_videoDeviceWithPosition:(long long)a0 deviceTypes:(id)a1;
- (BOOL)isSupportVideoDeviceType:(id)a0 withPosition:(long long)a1;
- (BOOL)isDeviceSupportMacroPhotograph;
- (id)videoDeviceWithPosition:(long long)a0 deviceTypes:(id)a1;
- (id)videoDeviceWithPosition:(long long)a0;
- (void).cxx_destruct;
- (void)preheatCaptureResources;
- (id)init;

@end
