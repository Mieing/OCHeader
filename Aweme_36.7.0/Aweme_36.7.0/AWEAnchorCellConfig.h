@class UIColor, UIFont, NSString;

@interface AWEAnchorCellConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) long long titleNumberOfLines;
@property (nonatomic) BOOL hideAddButton;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *subTitleColor;
@property (nonatomic) double titleTop;
@property (retain, nonatomic) UIFont *selectBtnTitleFont;
@property (retain, nonatomic) UIColor *selectBtnTitleColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *selectBtnTitle;

- (void)setupDefaultConfig;
- (void).cxx_destruct;
- (id)init;

@end
