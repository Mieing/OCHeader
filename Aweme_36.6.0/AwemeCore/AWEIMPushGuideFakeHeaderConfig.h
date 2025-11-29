@class NSString, UIImage;

@interface AWEIMPushGuideFakeHeaderConfig : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *avatarURLString;
@property (nonatomic) long long iconType;
@property (retain, nonatomic) UIImage *avatarIcon;
@property (retain, nonatomic) UIImage *tipsIcon;
@property (nonatomic) double avatarCornerRadius;
@property (nonatomic) long long contentMode;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
