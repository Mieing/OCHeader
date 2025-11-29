@class UIColor, CAMediaTimingFunction;

@interface AWETeenPanelContainerConfig : NSObject

@property (nonatomic) double headerHeight;
@property (nonatomic) struct CGSize { double width; double height; } cornerRadii;
@property (nonatomic) BOOL needBlurEffect;
@property (nonatomic) BOOL needCloseButton;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) CAMediaTimingFunction *presentTimingFunction;
@property (retain, nonatomic) CAMediaTimingFunction *dismissTimingFunction;
@property (nonatomic) double presentAnimateDuration;
@property (nonatomic) double dismissAnimateDuration;

- (void).cxx_destruct;

@end
