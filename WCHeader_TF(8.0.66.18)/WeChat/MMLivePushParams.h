@class TRTCParams;

@interface MMLivePushParams : NSObject

@property (nonatomic) BOOL isAudience;
@property (retain, nonatomic) TRTCParams *trtcParams;
@property (nonatomic) BOOL forceUseTRTCAudioDevice;
@property (nonatomic) BOOL enableCameraCapture;
@property (nonatomic) BOOL isKeepmixEnabled;
@property (nonatomic) unsigned long long keepmixIdleTime;

- (void).cxx_destruct;

@end
