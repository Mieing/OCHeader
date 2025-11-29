@class NSString;

@interface UnisusEnvParams : NSObject

@property (retain, nonatomic) NSString *aid;
@property (retain, nonatomic) NSString *hostVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *channel;
@property (retain, nonatomic) NSString *devicePlatform;
@property (retain, nonatomic) NSString *sdkVersion;
@property (retain, nonatomic) NSString *hostAbi;
@property (nonatomic) long long fullSdkVersionCode;
@property (nonatomic) long long sdkVersionCode;
@property (retain, nonatomic) NSString *hdtDebugOption;
@property (nonatomic) long long workerStackSize;

- (void).cxx_destruct;

@end
