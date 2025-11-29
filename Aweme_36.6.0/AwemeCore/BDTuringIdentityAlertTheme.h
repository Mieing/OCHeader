@class NSString, UIColor, UIFont;

@interface BDTuringIdentityAlertTheme : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) UIColor *titleTextColor;
@property (copy, nonatomic) UIColor *contentTextColor;
@property (copy, nonatomic) UIColor *cancelTextColor;
@property (copy, nonatomic) UIColor *confirmTextColor;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIFont *titleTextFont;
@property (copy, nonatomic) UIFont *contentTextFont;

- (void).cxx_destruct;
- (id)init;

@end
