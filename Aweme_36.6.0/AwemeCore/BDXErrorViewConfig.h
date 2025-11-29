@class UIColor, UIImage, NSString;

@interface BDXErrorViewConfig : NSObject

@property (copy, nonatomic) id /* block */ onRetry;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *errorImage;
@property (copy, nonatomic) NSString *errorTitleMessage;
@property (retain, nonatomic) UIColor *errorTitleMessageColor;
@property (copy, nonatomic) NSString *descMessage;
@property (retain, nonatomic) UIColor *descMessageColor;
@property (copy, nonatomic) NSString *retryButtonText;
@property (retain, nonatomic) UIColor *retryButtonTextColor;
@property (retain, nonatomic) UIColor *retryButtonBackgroundColor;
@property (nonatomic) BOOL showRetryButton;

- (void).cxx_destruct;
- (id)init;

@end
