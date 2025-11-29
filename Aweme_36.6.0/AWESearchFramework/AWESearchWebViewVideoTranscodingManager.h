@interface AWESearchWebViewVideoTranscodingManager : NSObject

@property (nonatomic) BOOL currentTranscodeResults;
@property (nonatomic) long long transcodingMark;
@property (nonatomic) BOOL isTranscodingAtCommitNavigationValid;
@property (nonatomic) BOOL isTranscodingAtFinishNavigationValid;
@property (nonatomic) double settingsMaximumJumpTime;
@property (nonatomic) double webJumpMaxtimeFrom;

- (void)resetWebJumpMaximumTime;
- (void)resetTranscodingValid;
- (BOOL)checkIfValidToJump;
- (void)didTranscodingAtCommitNavigation;
- (void)didTranscodingAtFinishNavigationValid;
- (long long)getTranscodingMark:(BOOL)a0;
- (void)onTransCodingMaxTimeReach:(long long)a0 isDetailPage:(BOOL)a1 videoTranscodingDataSuccess:(BOOL)a2 videoAddressTranscodingDataSuccess:(BOOL)a3 requestURL:(id)a4 searchParams:(id)a5;
- (void)reportVideoTranscodeJSFetchResult:(BOOL)a0 url:(id)a1 injectTime:(long long)a2;
- (void)reportVideoTranscodeInjectTime:(id)a0;
- (void)reportVideoTranscodeGetServerDataResult:(long long)a0 url:(id)a1 totalCost:(long long)a2 requestCost:(long long)a3 decryptCost:(long long)a4;
- (BOOL)isTranscodingSuccess;
- (void)onTransCodingSuccess;
- (void)reportVideoTranscodeState:(long long)a0 isPreTranscode:(BOOL)a1 isDetailPage:(BOOL)a2 withAddress:(BOOL)a3 withResultData:(BOOL)a4 requestURL:(id)a5 searchParams:(id)a6;
- (id)init;

@end
