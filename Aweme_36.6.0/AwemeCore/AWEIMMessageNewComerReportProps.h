@class UIColor, NSString, NSArray;

@interface AWEIMMessageNewComerReportProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) UIColor *welcomeColor;
@property (retain, nonatomic) UIColor *welcomeTitleColor;
@property (retain, nonatomic) NSString *welcomeTapString;
@property (retain, nonatomic) NSString *welcomeTitleString;
@property (retain, nonatomic) NSArray *avatars;
@property (nonatomic) BOOL showWelcomeTapView;
@property (nonatomic) BOOL showAvatar;
@property (nonatomic) double avatarMarginLeft;
@property (nonatomic) double avatarMarginRight;
@property (copy, nonatomic) id /* block */ didTapAvatarAction;
@property (copy, nonatomic) id /* block */ didTapWelcomeAction;

- (void).cxx_destruct;

@end
