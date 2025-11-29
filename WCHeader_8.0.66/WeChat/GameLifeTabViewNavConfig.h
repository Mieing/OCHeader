@class UIColor, NSString, NSArray, NSNumber;

@interface GameLifeTabViewNavConfig : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) double titleAlpha;
@property (nonatomic) BOOL hideRightBarItem;
@property (nonatomic) BOOL showSystemRightBarItem;
@property (retain, nonatomic) UIColor *navigationBarColor;
@property (copy, nonatomic) NSArray *rightNavConfigItems;
@property (nonatomic) BOOL isWebViewLayoutUnderNav;
@property (nonatomic) NSNumber *iconDark;
@property (nonatomic) BOOL hasShow;

- (id)initWithTitle:(id)a0 titleAlpha:(double)a1;
- (void).cxx_destruct;

@end
