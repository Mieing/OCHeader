@class NSString, UIImage;

@interface AWEAddMateGuideBannerConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL disablePrimaryButton;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *iconUrlLight;
@property (copy, nonatomic) NSString *iconUrlDark;
@property (nonatomic) long long exitDisplayCount;
@property (nonatomic) long long displayMaxFriendCount;

- (void).cxx_destruct;

@end
