@class UIImage, NSString, UIColor;

@interface WCFinderAuthorToolbarItemViewModel : NSObject

@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *iconAccessibilityLabel;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) UIColor *countTipsColor;

- (void).cxx_destruct;

@end
