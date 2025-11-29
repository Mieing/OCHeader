@class MMDynamicColor, NSString;

@interface MMNavigationBarConfig : NSObject

@property (readonly, nonatomic) MMDynamicColor *backgroundColor;
@property (readonly, nonatomic) BOOL useBlackStatusbar;
@property (readonly, nonatomic) NSString *barTitle;
@property (readonly, nonatomic) MMDynamicColor *titleColor;
@property (readonly, nonatomic) long long leftBarButtonType;
@property (readonly, nonatomic) MMDynamicColor *leftButtonColor;
@property (readonly, nonatomic) NSString *rightButtonTitle;
@property (readonly, nonatomic) NSString *rightButtonImage;
@property (readonly, nonatomic) MMDynamicColor *rightButtonColor;

+ (id)NavigationBarConfigWithBackgroundColor:(id)a0 useBlackStatusbar:(BOOL)a1 barTitle:(id)a2 titleColor:(id)a3 leftBarButtonType:(long long)a4 leftButtonColor:(id)a5 rightButtonTitle:(id)a6 rightButtonImage:(id)a7 rightButtonColor:(id)a8;

- (id)initWithBackgroundColor:(id)a0 useBlackStatusbar:(BOOL)a1 barTitle:(id)a2 titleColor:(id)a3 leftBarButtonType:(long long)a4 leftButtonColor:(id)a5 rightButtonTitle:(id)a6 rightButtonImage:(id)a7 rightButtonColor:(id)a8;
- (id)description;
- (void).cxx_destruct;

@end
