@class NSString, BDPUniqueID, BDPPangleBannerMonitor;

@interface BDPPluginPangleAdInfo : BDPPluginAppAdInfo

@property (retain, nonatomic) NSString *adUnitID;
@property (nonatomic) struct CGSize { double width; double height; } adSize;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPPangleBannerMonitor *monitor;

- (void).cxx_destruct;
- (void)dealloc;

@end
