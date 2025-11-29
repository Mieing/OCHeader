@class NSString;

@interface IESLiveByteCastAppInfoWrapper : NSObject <BDSCAppService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInHouse;
- (void)toastMessage:(id)a0;
- (BOOL)isDebugConfiguration;
- (BOOL)userConfirmPrivacyPopup;
- (void)traceLiveLogString:(id)a0 traceEventName:(id)a1 traceParams:(id)a2 outerTraceLogInfo:(id)a3;
- (void)traceCastEvent:(id)a0 params:(id)a1 outterTraceLogInfo:(id)a2;

@end
