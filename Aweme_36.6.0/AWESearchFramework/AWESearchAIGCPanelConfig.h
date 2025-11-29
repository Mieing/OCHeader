@class UIColor, AWESearchAIGCPanelAnimateConfig;

@interface AWESearchAIGCPanelConfig : NSObject

@property (retain, nonatomic) AWESearchAIGCPanelAnimateConfig *animateConfig;
@property (nonatomic) long long addType;
@property (nonatomic) long long heightType;
@property (nonatomic) double customHeightRatio;
@property (nonatomic) long long topBarType;
@property (nonatomic) BOOL enableFullScreen;
@property (retain, nonatomic) UIColor *customBgColor;

- (void).cxx_destruct;

@end
