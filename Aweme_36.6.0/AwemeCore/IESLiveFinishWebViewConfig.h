@class UIColor, NSString;

@interface IESLiveFinishWebViewConfig : NSObject

@property (nonatomic) BOOL hideNavBar;
@property (nonatomic) BOOL hideStatusBar;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (copy, nonatomic) NSString *statusBarColor;
@property (retain, nonatomic) UIColor *statusBarBackgroundColor;
@property (nonatomic) double topMargin;

- (void).cxx_destruct;

@end
