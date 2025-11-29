@class NSURL, NSString;

@interface AWEIMGuideToCustomerServiceBannerViewConfig : NSObject

@property (copy, nonatomic) NSURL *iconUrlLight;
@property (copy, nonatomic) NSURL *iconUrlDark;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL hasCloseButton;
@property (copy, nonatomic) id /* block */ closeBtnTapped;
@property (copy, nonatomic) id /* block */ actionBtnTapped;

- (void).cxx_destruct;

@end
