@class NSString;

@interface IESLiveExceptionExit : NSObject <HMDAPPExitReasonDetectorProtocol, IESLiveExceptionExitServices>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (void)installExceptionHandler;
- (id)mapExceptionExit:(int)a0 frozen:(BOOL)a1;
- (id)lastActionTarget;
- (void)constructAnchorMetrics:(id)a0 info:(id)a1;
- (void)reportExceptionExit:(id)a0 exceptionInfo:(id)a1 info:(id)a2;

@end
