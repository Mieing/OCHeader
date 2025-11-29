@interface AWEHPBottomBarInfoModel : NSObject

@property (nonatomic) BOOL currentFillBackground;
@property (nonatomic) long long currentThemeStyle;
@property (nonatomic) BOOL currentShowBackgroundImage;
@property (nonatomic) double currentBarAlpha;
@property (nonatomic) BOOL currentBarHidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentBarFrame;

- (id)description;

@end
