@class NSString, UIFont, UIColor;

@interface AWENewsAISmartTabConfig : NSObject

@property (nonatomic) long long tabType;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *defaultFont;
@property (retain, nonatomic) UIColor *defaultFontColor;
@property (retain, nonatomic) UIColor *selectedFontColor;
@property (retain, nonatomic) UIColor *defaultItemColor;
@property (retain, nonatomic) UIColor *selectedItemColor;
@property (nonatomic) double itemSpace;
@property (nonatomic) double titlePadding;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })titleSize;

@end
