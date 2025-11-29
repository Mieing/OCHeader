@class NSString, CastProxyConfiguration;

@interface AWELiveCastProxyServiceImpl : NSObject <CastProxyMonitorDelegate, CastProxyLogDelegate, IESLiveCastProxyService>

@property (retain, nonatomic) CastProxyConfiguration *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (BOOL)isCastProxyURL:(id)a0;
- (void)getResolutionDimensions:(id)a0 targetWidth:(long long *)a1 targetHeight:(long long *)a2;
- (void)logWithSDKMessage:(id)a0 level:(id)a1;
- (void)onEventWithName:(id)a0 params:(id)a1;
- (void)onVerboseWithMessage:(id)a0;
- (void)onDebugWithMessage:(id)a0;
- (void)onInfoWithMessage:(id)a0;
- (void)onWarnWithMessage:(id)a0;
- (void)onErrorWithMessage:(id)a0;
- (BOOL)enableCastProxy;
- (BOOL)enableTopSpeedCast;
- (BOOL)enableVerifyCastProxyInNormalRoom;
- (id)fetchProxyURLWithOriginalURL:(id)a0 token:(id)a1 deviceIP:(id)a2;
- (id)fetchProxyURLWithOriginalURL:(id)a0 token:(id)a1 deviceIP:(id)a2 outputResolution:(id)a3;
- (id)fetchProxyURLWithOriginalURLs:(id)a0 token:(id)a1 deviceIP:(id)a2;
- (void)castDidFinish;
- (void).cxx_destruct;

@end
