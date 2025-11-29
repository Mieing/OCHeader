@class UIColor, AWEIMUserSheetAction;

@interface AWEIMUserActionSheetButton : UIButton

@property (retain, nonatomic) AWEIMUserSheetAction *action;
@property (retain, nonatomic) UIColor *defaultColor;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
