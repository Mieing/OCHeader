@class MMLiveSEIConnectMicMsg;

@interface MMLiveCachedConnectMicInfoBeforeSwitchCdnOrTrtc : NSObject

@property (nonatomic) BOOL isCdn;
@property (retain, nonatomic) MMLiveSEIConnectMicMsg *seiMicMsg;

- (void).cxx_destruct;

@end
