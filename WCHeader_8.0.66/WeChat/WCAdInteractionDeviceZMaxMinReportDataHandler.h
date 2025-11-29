@interface WCAdInteractionDeviceZMaxMinReportDataHandler : WCAdInteractionReportDataHandler

@property (nonatomic) double maxZ;
@property (nonatomic) double minZ;
@property (nonatomic) BOOL triggerByAcceleration;

- (void)handleReceivedData:(id)a0;
- (id)fetchReportData;

@end
