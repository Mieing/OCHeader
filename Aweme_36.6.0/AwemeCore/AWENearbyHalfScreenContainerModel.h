@class UIView, NSString, AWENearbyHalfStyleConfigModel, NSArray, AWENearbyHalfClosedAction, NSDictionary, AWENearbyHalfShowAction, AWENearbyHalfScreenGesturesInfo;

@interface AWENearbyHalfScreenContainerModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *openSessionID;
@property (nonatomic) unsigned long long showSourceType;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long requestSourceType;
@property (copy, nonatomic) NSString *halfScreenID;
@property (copy, nonatomic) NSString *targetViewGroupID;
@property (copy, nonatomic) NSString *contentURL;
@property (nonatomic) BOOL fullScreenEnable;
@property (nonatomic) long long originHeightPercent;
@property (nonatomic) long long maxHeightPercent;
@property (nonatomic) BOOL needDelayShowAngle;
@property (weak, nonatomic) UIView *angleTargetView;
@property (nonatomic) BOOL hideTransparent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } angleTargetRect;
@property (nonatomic) double angleTargetOffetY;
@property (nonatomic) double angleTargetRadiusX;
@property (nonatomic) double angleTargetRadiusY;
@property (copy, nonatomic) NSString *transformerUpdateInfoString;
@property (copy, nonatomic) NSString *arrowColor;
@property (nonatomic) unsigned long long settingDataFrom;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) unsigned long long rowType;
@property (copy, nonatomic) NSString *closeType;
@property (nonatomic) unsigned long long closeButtonState;
@property (nonatomic) unsigned long long closeButtonStyle;
@property (copy, nonatomic) NSString *angleTargetRectDescription;
@property (nonatomic) long long pageType;
@property (nonatomic) double transformerCardHeight;
@property (nonatomic) double paddingTop;
@property (retain, nonatomic) AWENearbyHalfShowAction *halfShowAction;
@property (retain, nonatomic) AWENearbyHalfClosedAction *halfClosedAction;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWENearbyHalfStyleConfigModel *styleConfig;
@property (copy, nonatomic) NSDictionary *trackParamToHalfScreenEvent;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (copy, nonatomic) NSArray *bubbleGuideScene;
@property (nonatomic) unsigned long long forceDragBarStyle;
@property (retain, nonatomic) AWENearbyHalfScreenGesturesInfo *gesturesInfo;
@property (weak, nonatomic) UIView *closeTargetView;
@property (nonatomic) BOOL contentHightFullScreen;
@property (nonatomic) BOOL disableContentHorizontalScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isTargetFromNative;
- (BOOL)isNativeTopUtil;
- (void)updateAngleTargetRectProps:(id)a0;
- (BOOL)isNativeGrouponTab;
- (void).cxx_destruct;

@end
