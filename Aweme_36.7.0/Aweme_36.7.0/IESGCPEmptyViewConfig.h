@class UIFont, NSString, UIColor, UIImage, NSNumber;

@interface IESGCPEmptyViewConfig : NSObject

@property (nonatomic) BOOL hasImage;
@property (nonatomic) BOOL hasRemindText;
@property (nonatomic) BOOL hasAuxiliaryText;
@property (nonatomic) BOOL hasButton;
@property (retain, nonatomic) NSString *placeholderImageName;
@property (retain, nonatomic) NSString *placeholderImageUrl;
@property (nonatomic) struct CGSize { double width; double height; } placeholderImageViewSize;
@property (retain, nonatomic) NSString *remindText;
@property (retain, nonatomic) UIFont *remindTextFont;
@property (retain, nonatomic) UIColor *remindTextColor;
@property (retain, nonatomic) NSString *auxiliaryText;
@property (retain, nonatomic) UIFont *auxiliaryTextFont;
@property (retain, nonatomic) UIColor *auxiliaryTextColor;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIColor *buttonTextColor;
@property (retain, nonatomic) UIFont *buttonTextFont;
@property (retain, nonatomic) NSNumber *buttonCornerRadius;
@property (retain, nonatomic) UIColor *buttonColor;
@property (retain, nonatomic) UIColor *buttonBorderColor;
@property (retain, nonatomic) NSNumber *buttonBorderWidth;
@property (retain, nonatomic) NSNumber *buttonTopMargin;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (retain, nonatomic) UIImage *buttonBGImage;
@property (retain, nonatomic) UIImage *buttonRightIconImage;
@property (retain, nonatomic) UIColor *buttonRightIconTintColor;
@property (nonatomic) struct CGSize { double width; double height; } buttonRightIconSize;
@property (copy, nonatomic) id /* block */ onClickButton;

+ (id)liveNetworkErrorViewWithStyle:(long long)a0 retryBlock:(id /* block */)a1;

- (void).cxx_destruct;

@end
