@class BDByteScreenCastSearchResultPanel, BDByteScreenCastTracker;

@interface BDSCSearchNoDeviceGuideModel : NSObject

@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL invalidDLNADeviceFound;
@property (nonatomic) BOOL didFindOtherDevices;
@property (nonatomic) BOOL supportDanmaku;
@property (nonatomic) BOOL supportAirPlay;
@property (nonatomic) BOOL supportLocalCast;
@property (retain, nonatomic) BDByteScreenCastSearchResultPanel *panelConfig;
@property (retain, nonatomic) BDByteScreenCastTracker *tracker;

- (void).cxx_destruct;

@end
