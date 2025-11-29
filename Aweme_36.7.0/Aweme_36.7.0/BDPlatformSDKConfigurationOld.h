@class UIColor, UIFont, NSString, UIImage;

@interface BDPlatformSDKConfigurationOld : NSObject

@property (nonatomic) BOOL navBarTranslucent;
@property (retain, nonatomic) UIColor *navBarTintColor;
@property (retain, nonatomic) UIColor *navBarHairlineColor;
@property (retain, nonatomic) UIFont *navBarTitleFont;
@property (retain, nonatomic) UIColor *navBarTitleColor;
@property (retain, nonatomic) UIImage *leftBarButtonImage;
@property (retain, nonatomic) UIFont *navBarButtonFont;
@property (retain, nonatomic) UIColor *navBarButtonColor;
@property (copy, nonatomic) NSString *loginButtonColorString;
@property (copy, nonatomic) id /* block */ networkReachabilityBlock;

- (void).cxx_destruct;
- (id)init;

@end
