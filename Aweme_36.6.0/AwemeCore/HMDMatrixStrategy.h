@class NSString;

@interface HMDMatrixStrategy : NSObject <HMDAPPExitReasonDetectorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;

@end
