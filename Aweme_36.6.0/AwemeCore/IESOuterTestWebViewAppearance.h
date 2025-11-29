@class UIImage, UIColor, UIFont;

@interface IESOuterTestWebViewAppearance : NSObject

@property (nonatomic) long long preferredStatusBarStyle;
@property (retain, nonatomic) UIImage *navigationBackButtonImage;
@property (retain, nonatomic) UIColor *navigationBGColor;
@property (retain, nonatomic) UIColor *pageBGColor;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *sepLineColor;
@property (retain, nonatomic) UIColor *defaultLoadingProgressColor;
@property (nonatomic) double defaultLoadingProgressHeight;
@property (copy, nonatomic) id /* block */ webLoadingView;
@property (copy, nonatomic) id /* block */ webfailureView;

- (void).cxx_destruct;
- (id)init;

@end
