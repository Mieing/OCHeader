@class UIColor, NSString, UIImage, AWEURLModel;

@interface AWESpecialCardButtonConfig : NSObject

@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) UIColor *buttonTextColor;
@property (retain, nonatomic) UIColor *buttonBGColor;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (nonatomic) unsigned long long iconPosition;

- (void).cxx_destruct;

@end
