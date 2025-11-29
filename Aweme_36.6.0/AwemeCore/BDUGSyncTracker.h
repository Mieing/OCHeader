@interface BDUGSyncTracker : NSObject

+ (void)_eventV3:(id)a0 params:(id)a1;
+ (void)trackArriverWithPackets:(id)a0 channel:(unsigned long long)a1;
+ (void)trackSubmitWithPackets:(id)a0;
+ (void)trackReportWithPackets:(id)a0 channel:(unsigned long long)a1;

@end
