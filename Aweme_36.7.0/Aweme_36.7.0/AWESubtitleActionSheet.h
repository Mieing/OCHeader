@class UIColor, NSString, NSArray, UIView;
@protocol AWESubtitleActionSheetDelegate;

@interface AWESubtitleActionSheet : UIView

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSArray *buttonTypes;
@property (copy, nonatomic) NSArray *buttonFonts;
@property (retain, nonatomic) UIView *actionSheet;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (nonatomic) BOOL tapBackgroundToDismiss;
@property (nonatomic) BOOL isHideTitle;
@property (weak, nonatomic) id<AWESubtitleActionSheetDelegate> delegate;

- (void)onButtonClicked:(id)a0;
- (id)buttonWithType:(long long)a0 title:(id)a1 font:(id)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)buttonWithTitle:(id)a0 subtitle:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)shouldHighlightShow:(long long)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)dismissAction;
- (void)show;
- (void)doNothing;

@end
