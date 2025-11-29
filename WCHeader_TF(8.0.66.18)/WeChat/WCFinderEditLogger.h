@class NSString;

@interface WCFinderEditLogger : MMUserService <TAVLoger, MMServiceProtocol, MAVLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupEditVideoCompositionLogger;
- (void)onServiceClearData;
- (void)logInfo:(id)a0;
- (void)logDebug:(id)a0;
- (void)logWarning:(id)a0;
- (void)logError:(id)a0;
- (void)mavLogInfo:(id)a0;
- (void)mavLogDebug:(id)a0;
- (void)mavLogWarning:(id)a0;
- (void)mavLogError:(id)a0;

@end
