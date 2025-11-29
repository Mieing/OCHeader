@class AWEProgressIndicatorUIConfig;

@interface AWEProgressIndicatorStatusUIConfig : NSObject

@property (nonatomic) long long totalDuration;
@property (retain, nonatomic) AWEProgressIndicatorUIConfig *indicatorNormalConfig;
@property (retain, nonatomic) AWEProgressIndicatorUIConfig *indicatorActiveConfig;
@property (retain, nonatomic) AWEProgressIndicatorUIConfig *indicatorDraggingConfig;
@property (retain, nonatomic) AWEProgressIndicatorUIConfig *indicatorStableConfig;

- (void).cxx_destruct;

@end
