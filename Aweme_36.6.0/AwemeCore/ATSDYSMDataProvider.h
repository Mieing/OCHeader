@class NSString;

@interface ATSDYSMDataProvider : NSObject <ATSSecurityMonitorDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initChannelsWithDelegate:(id)a0;
- (id)detectors;

@end
