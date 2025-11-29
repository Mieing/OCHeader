@class AWEProgressUIColorConfig, AWEProgressUIContainerConfig;

@interface AWEProgressFakeViewUIConfig : NSObject

@property (retain, nonatomic) AWEProgressUIContainerConfig *containerConfig;
@property (retain, nonatomic) AWEProgressUIColorConfig *progressMaximumColorConifg;
@property (nonatomic) double maximumTrackHeight;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) AWEProgressUIColorConfig *progressMinimumColorConifg;
@property (nonatomic) double minimumTrackHeight;
@property (retain, nonatomic) AWEProgressUIColorConfig *thumbTintColorConifg;
@property (nonatomic) double thumbViewRadius;
@property (nonatomic) double thumbViewWidth;
@property (nonatomic) double thumbViewHeight;

- (void).cxx_destruct;

@end
