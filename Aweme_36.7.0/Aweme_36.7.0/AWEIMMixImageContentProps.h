@class UIColor, NSString, NSArray, AWEIMImageContentProps;

@interface AWEIMMixImageContentProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEIMImageContentProps *imageContentProps;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *coverName;
@property (retain, nonatomic) UIColor *coverBGColor;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) UIColor *descColor;
@property (nonatomic) BOOL needDescArrow;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSArray *avatarURLs;
@property (nonatomic) long long avatarMaxShowCount;
@property (nonatomic) double avatarWidth;
@property (nonatomic) BOOL hideCover;
@property (nonatomic) BOOL showDarkMask;
@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic) BOOL hideButton;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (copy, nonatomic) NSString *stateImageName;

- (void).cxx_destruct;

@end
