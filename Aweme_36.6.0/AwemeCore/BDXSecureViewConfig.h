@class UIColor, UIImage, NSString;

@interface BDXSecureViewConfig : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *errorIcon;
@property (copy, nonatomic) NSString *errorTitle;
@property (retain, nonatomic) UIColor *errorTitleColor;
@property (copy, nonatomic) NSString *descMessage;
@property (retain, nonatomic) UIColor *descMessageColor;
@property (copy, nonatomic) NSString *retryButtonText;
@property (retain, nonatomic) UIColor *retryButtonTextColor;
@property (retain, nonatomic) UIColor *retryButtonBackgroundColor;

- (void).cxx_destruct;

@end
