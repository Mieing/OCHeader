@class UIImage, NSString, UIColor;

@interface AWEShareSaveAlertButtonModel : NSObject

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIImage *normalIcon;
@property (copy, nonatomic) NSString *normalTitle;
@property (retain, nonatomic) UIImage *shareIcon;
@property (copy, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) UIColor *shareBGColor;
@property (copy, nonatomic) NSString *loadingTitle;
@property (nonatomic) double loadingProgress;
@property (nonatomic) unsigned long long buttonType;

- (void).cxx_destruct;

@end
