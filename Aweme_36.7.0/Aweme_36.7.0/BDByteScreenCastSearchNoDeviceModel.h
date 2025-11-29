@class BDSCFeedBackUIModel, BDByteScreenCastSearchResultPanel, BDByteScreenCastTracker, BDSCResearchCardShowStrategy;

@interface BDByteScreenCastSearchNoDeviceModel : NSObject

@property (retain, nonatomic) BDByteScreenCastSearchResultPanel *panelConfig;
@property (nonatomic) BOOL isVSSportsStyle;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL uiLandscapeSame;
@property (nonatomic) BOOL hasLocalDevicesDetectPermission;
@property (nonatomic) double leftRightPadding;
@property (nonatomic) double heightRate;
@property (retain, nonatomic) BDByteScreenCastTracker *tracker;
@property (retain, nonatomic) BDSCFeedBackUIModel *feedbackModel;
@property (retain, nonatomic) BDSCResearchCardShowStrategy *researchCardShowStrategy;
@property (nonatomic) BOOL supportAirPlay;

- (void).cxx_destruct;
- (id)init;

@end
