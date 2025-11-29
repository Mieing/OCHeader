@class NSString, NSArray, NSObject;
@protocol OS_dispatch_source;

@interface AWETokamakImageService : HTSService <AWETokamakImageService> {
    unsigned long long _decodeWarningThreshold;
    BOOL _logViewLocationWhenWarning;
    BOOL _useUserInfoWhenWarning;
    NSArray *_monitors;
    NSObject<OS_dispatch_source> *_lastHugeImageInvalidateTimer;
    double _lastHugeImageDecodeTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)trackImageWillDecode:(id)a0;
- (void)trackImageUsage:(id)a0;
- (void)tryLogImageLocation:(id)a0;
- (void).cxx_destruct;

@end
