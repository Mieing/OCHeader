@class AWEHPTopTabItemImageUIModel, NSString, AWEHPTopTabItemIndicatorIconUIModel, UIImage, AWEHPChannelLottieParams, AWEHPLottiePlayParams;

@interface AWEHPTopTabItemUIModel : NSObject

@property (nonatomic) BOOL isMainTab;
@property (nonatomic) unsigned long long topBarItemType;
@property (retain, nonatomic) AWEHPTopTabItemImageUIModel *imageConfig;
@property (copy, nonatomic) NSString *itemIndicatorViewColor;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *accessibilityHintText;
@property (copy, nonatomic) NSString *accessibilityValue;
@property (nonatomic) BOOL topBarIsDifferentiation;
@property (nonatomic) struct CGSize { double width; double height; } indicatorIconMaxSize;
@property (nonatomic) double indicatorIconMaxDistance;
@property (retain, nonatomic) AWEHPTopTabItemIndicatorIconUIModel *indicatorIcon;
@property (nonatomic) double centerXOffset;
@property (nonatomic) double selectedIndicatorWidth;
@property (nonatomic) double selectedIndicatorHeight;
@property (retain, nonatomic) UIImage *selectedLightModelImage;
@property (retain, nonatomic) UIImage *selectedDarkModelImage;
@property (copy, nonatomic) NSString *lottieId;
@property (retain, nonatomic) AWEHPChannelLottieParams *lottieParams;
@property (retain, nonatomic) AWEHPLottiePlayParams *playParams;
@property (copy, nonatomic) id /* block */ lottieShowBlock;
@property (copy, nonatomic) id /* block */ lottieExitBlock;
@property (copy, nonatomic) id /* block */ sendMonitorBlock;

- (void)resetLottieToTitle;
- (void).cxx_destruct;
- (id)init;

@end
