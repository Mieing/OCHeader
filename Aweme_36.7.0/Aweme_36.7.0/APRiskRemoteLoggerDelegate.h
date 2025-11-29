@class NSString;

@interface APRiskRemoteLoggerDelegate : NSObject <APRiskRemoteLoggerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)writeLogWithActionId:(id)a0 extParams:(id)a1 appId:(id)a2 seed:(id)a3 ucId:(id)a4;
- (void)writeLogWithActionId:(id)a0 extParams:(id)a1 appId:(id)a2 seed:(id)a3 ucId:(id)a4 bizType:(id)a5;
- (void)writeEventLog:(id)a0;

@end
