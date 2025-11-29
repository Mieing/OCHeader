@class UIColor, NSString, UIFont;

@interface IESLivePickerViewConfig : NSObject

@property (retain, nonatomic) UIColor *maskColor;
@property (retain, nonatomic) UIColor *overlayColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double horizontalMargin;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double titleHeight;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *cancelText;
@property (retain, nonatomic) UIColor *cancelColor;
@property (retain, nonatomic) UIColor *confirmColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *actionFont;
@property (copy, nonatomic) NSString *confirmText;
@property (nonatomic) BOOL titleSeprator;
@property (retain, nonatomic) UIColor *itemHighlightColor;
@property (retain, nonatomic) UIColor *itemCommonColor;
@property (retain, nonatomic) UIFont *itemFont;
@property (retain, nonatomic) UIFont *itemHighlightFont;
@property (nonatomic) long long itemHeight;
@property (nonatomic) double itemMultiple;
@property (retain, nonatomic) UIColor *sepratorColor;
@property (nonatomic) double componentMargin;

- (void).cxx_destruct;
- (id)init;

@end
