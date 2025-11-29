@class UIColor, NSString, WCActionSheetItemRedDotInfo, UIImage;

@interface WCActionSheetItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *titleColor;
@property (nonatomic) double titleSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) UIColor *descColor;
@property (nonatomic) double descSize;
@property (nonatomic) BOOL bEnable;
@property (nonatomic) BOOL bCustom;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL bDestructiveButton;
@property (nonatomic) BOOL bForbidAdjustFont;
@property (nonatomic) double itemHeight;
@property (retain, nonatomic) id extraInfo;
@property (retain, nonatomic) WCActionSheetItemRedDotInfo *redDotInfo;
@property (copy, nonatomic) id /* block */ itemViewConfigAction;
@property (copy, nonatomic) id /* block */ eventAction;
@property (retain, nonatomic) NSString *accessibilityLabel;

- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 fontSize:(double)a1 fontColor:(id)a2 WithDesc:(id)a3 descFontSize:(double)a4 descFontColor:(id)a5 enable:(BOOL)a6;
- (double)getItemHeight;
- (void).cxx_destruct;

@end
