@class UIColor, AWEUserSheetAction;

@interface AWEUserActionSheetButton : UIButton

@property (retain, nonatomic) AWEUserSheetAction *action;
@property (retain, nonatomic) UIColor *defaultColor;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
