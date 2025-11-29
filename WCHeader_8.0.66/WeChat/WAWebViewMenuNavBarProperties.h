@class NSString, UIColor;

@interface WAWebViewMenuNavBarProperties : NSObject

@property (nonatomic) long long navMode;
@property (nonatomic) long long statusBarType;
@property (copy, nonatomic) NSString *navTitle;
@property (retain, nonatomic) UIColor *navBarColor;
@property (nonatomic) BOOL rightButtonHidden;
@property (nonatomic) BOOL loading;

- (void).cxx_destruct;

@end
