@class NSString;

@interface IESLivePuzzleAppInfo : NSObject <PuzzleAppInfoServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providePuzzleAppInfoServiceProtocol:(id)a0;

- (BOOL)isTeenMode;
- (double)currentFontScale;
- (id)appVersionCode;
- (long long)currentAPPUIMode;
- (BOOL)isBOEEnabled;
- (BOOL)isPPEEnabled;
- (BOOL)isHybridPPEEnabled;
- (id)lane;
- (long long)netQuality;
- (id)webcastSDKVersion;
- (double)veDeviceScore;
- (id)fpsInDuration:(double)a0;
- (double)bangsHeight;
- (id)appID;
- (id)appName;
- (id)languageCode;
- (id)channel;
- (id)region;
- (id)deviceID;
- (id)installID;
- (id)accessCode;
- (id)appBuildNumber;

@end
