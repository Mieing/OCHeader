@class NSString;

@interface AWEIMMultiTabsVCInitConfig : NSObject

@property (nonatomic) BOOL shouldAutomaticallyAdjustsScrollViewInsets;
@property (nonatomic) BOOL disablePanScrollFunction;
@property (nonatomic) BOOL enableTabTapAnimationFunction;
@property (nonatomic) unsigned long long pageUIStandard;
@property (nonatomic) BOOL needCustomNaviBar;
@property (copy, nonatomic) NSString *customNaviBarLeftItemTitle;
@property (nonatomic) unsigned long long naviBarButtonPresetStyle;
@property (nonatomic) BOOL useTabbarViewAsNaviBarTitle;

- (void).cxx_destruct;

@end
