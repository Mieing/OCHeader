@class UIColor, NSString, UIFont, UIImage, NSDictionary, UIView;

@interface AWESearchScanPopEntranceConfig : NSObject <AWESearchScanPopEntranceConfigProtocol>

@property (retain, nonatomic) UIColor *bgColor;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *originalImage;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) double imageBorderWidth;
@property (retain, nonatomic) UIColor *imageBorderColor;
@property (copy, nonatomic) NSString *photoIdentify;
@property (copy, nonatomic) NSString *photoTimeDiff;
@property (nonatomic) double textSize;
@property (nonatomic) double imageSize;
@property (nonatomic) BOOL enableAdjustPopupSizeOnDifferentDevices;
@property (nonatomic) unsigned long long popupSize;
@property (nonatomic) unsigned long long photoType;
@property (nonatomic) unsigned long long configStrategy;
@property (copy, nonatomic) NSString *notClickCountKey;
@property (nonatomic) double showTimeInterval;
@property (nonatomic) long long imgMaxAppearance;
@property (copy, nonatomic) NSDictionary *trackLog;
@property (weak, nonatomic) UIView *showOnView;
@property (retain, nonatomic) UIView *target;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;
@property (nonatomic) unsigned long long position;
@property (nonatomic) double autoDismissTime;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) BOOL autoAdaption;
@property (nonatomic) BOOL clickable;
@property (nonatomic) BOOL shouldAutoTimerCountInScrollProcess;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) double popStartTime;
@property (nonatomic) double pageStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)syncGetAWESearchScanPopEntranceConfig;
- (unsigned long long)popupEntranceSize;
- (id)getScanPopEntranceConfig;
- (id)syncGetAWESearchScanPopEntranceAdditionalConfig;
- (BOOL)enableScanPopAdditionalConfig;
- (id)syncGetAWESearchScanPopEntranceCameraConfig;
- (id)screenAdjustGuideText;
- (id)initWithShowOnView:(id)a0 target:(id)a1 targetPoint:(struct CGPoint { double x0; double x1; })a2 trackLog:(id)a3;
- (void)recordScanPopShow;
- (id)guideTypeString;
- (void)adjustConfigInCameraScene;
- (void).cxx_destruct;

@end
