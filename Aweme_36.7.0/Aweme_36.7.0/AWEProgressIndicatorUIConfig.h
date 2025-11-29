@class UIImage, AWEProgressUITextConfig, AWEProgressUIContainerConfig;

@interface AWEProgressIndicatorUIConfig : NSObject

@property (retain, nonatomic) AWEProgressUIContainerConfig *containerConfig;
@property (retain, nonatomic) AWEProgressUITextConfig *leftTextConfig;
@property (retain, nonatomic) AWEProgressUITextConfig *rightTextConfig;
@property (nonatomic) unsigned long long separatorType;
@property (retain, nonatomic) UIImage *seperatorImage;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double marginBetweenViews;
@property (nonatomic) BOOL shouldShowHour;

- (void).cxx_destruct;

@end
