@class UIColor, NSString, UIFont, UIImage, IESIMContactPickerNaviRightButtonConfig;

@interface IESIMContactPickerNaviBarConfig : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIImage *leftImage;
@property (nonatomic) BOOL shouldHideBottomLine;
@property (nonatomic) double height;
@property (retain, nonatomic) IESIMContactPickerNaviRightButtonConfig *rightButtonConfig;
@property (copy, nonatomic) id /* block */ didBackButtonClickBlock;
@property (copy, nonatomic) id /* block */ didClickSelectAllBlock;
@property (nonatomic) BOOL enableDefaultHeight;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
