@class NSString, UIView, BDSCUISettingModel;

@interface BDByteScreenCastAppUIConfigInfo : NSObject

@property (copy, nonatomic) NSString *xsgDeviceTagDesc;
@property (copy, nonatomic) NSString *defaultDeviceHeadTitle;
@property (copy, nonatomic) NSString *limitedClarityHeaderTitle;
@property (copy, nonatomic) NSString *xsgLabelColor;
@property (copy, nonatomic) NSString *deviceSelectedColor;
@property (nonatomic) BOOL isLandscapeStream;
@property (retain, nonatomic) BDSCUISettingModel *uiSettingsModel;
@property (nonatomic) unsigned long long clarityPanelStyle;
@property (nonatomic) double searchDeviceViewHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } searchDeviceViewFrame;
@property (nonatomic) BOOL needCornerRadius;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIView *loadingView;
@property (nonatomic) BOOL isVSRoomSportsPlayBack;
@property (nonatomic) BOOL isRoomSupport4K;
@property (weak, nonatomic) UIView *sportsFullScreenContainerView;
@property (nonatomic) BOOL supportFoldMode;
@property (nonatomic) unsigned long long toastShowOnDeviceType;
@property (nonatomic) BOOL isLandScapeV2Style;
@property (nonatomic) BOOL liveByteCastShouldPauseStreaming;

- (void).cxx_destruct;
- (id)init;

@end
