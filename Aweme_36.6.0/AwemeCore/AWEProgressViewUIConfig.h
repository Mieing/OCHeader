@class UIImage, AWEProgressUIColorConfig, AWEProgressUIContainerConfig;

@interface AWEProgressViewUIConfig : NSObject

@property (retain, nonatomic) AWEProgressUIContainerConfig *containerConfig;
@property (nonatomic) BOOL enablePanGesture;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long trackType;
@property (retain, nonatomic) UIImage *maximumTrackImage;
@property (retain, nonatomic) AWEProgressUIColorConfig *progressMaximumColorConifg;
@property (retain, nonatomic) UIImage *minimumTrackImage;
@property (retain, nonatomic) AWEProgressUIColorConfig *progressMinimumColorConifg;
@property (nonatomic) unsigned long long thumbType;
@property (retain, nonatomic) UIImage *thumbImage;
@property (retain, nonatomic) AWEProgressUIColorConfig *thumbTintColorConifg;

- (void).cxx_destruct;

@end
