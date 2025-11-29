@protocol MTLDevice;

@interface VEMetalGPUInfoTracker : NSObject {
    id<MTLDevice> _metalDevice;
}

+ (void)uploadMetalGPUInfoOnce;
+ (void)uploadMetalGPUInfo;

- (id)getInfoDict;
- (void).cxx_destruct;
- (id)init;

@end
