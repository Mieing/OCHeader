@class NSString, NSTimer, UIImage, UIView;

@interface AWELifeSearchBar : AWESearchBar

@property (retain, nonatomic) NSTimer *textChangedTimer;
@property (retain, nonatomic) NSString *lastText;
@property (retain, nonatomic) NSString *currentText;
@property (retain, nonatomic) UIView *rightView;
@property (nonatomic) BOOL needMoveCursorToEnd;
@property (copy, nonatomic) id /* block */ searchBarCharacterDidChange;
@property (copy, nonatomic) id /* block */ searchBarSelectionDidChange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftViewFrame;
@property (retain, nonatomic) UIImage *bgImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 colorStyle:(long long)a1 requiredHeight:(double)a2 font:(id)a3;
- (void)fireTimer;
- (void)textChangedAction;
- (void)p_moveCursorToEnd:(id)a0;
- (void)updatePlaceholderUI;
- (void).cxx_destruct;
- (void)setPlaceholder:(id)a0;
- (void)setText:(id)a0;
- (void)invalidateTimer;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)textFieldDidChangeSelection:(id)a0;

@end
