@class NSString, UIColor;

@interface AWEIMActionSheetItemModel : NSObject

@property (nonatomic) BOOL isDisable;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) BOOL duxIcon;
@property (copy, nonatomic) NSString *duxName;
@property (retain, nonatomic) UIColor *duxColor;
@property (nonatomic) BOOL iconNameThemeRevearse;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) NSString *trackButtonName;

- (void).cxx_destruct;

@end
