@class WCFinderNavTabTitleViewLayout, NSMutableArray, UIView;
@protocol WCFinderNavTabTitleViewDelegate;

@interface WCFinderNavTabTitleView : MMBarItemCustomView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) NSMutableArray *titleViews;
@property (retain, nonatomic) UIView *cursorView;
@property (nonatomic) BOOL autoAdjustSize;
@property (weak, nonatomic) id<WCFinderNavTabTitleViewDelegate> delegate;
@property (nonatomic) double cursorProgress;
@property (retain, nonatomic) WCFinderNavTabTitleViewLayout *layout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAutoAdjustSize:(BOOL)a0 needCursor:(BOOL)a1;
- (void)commonInitWithAutoAdjustSize:(BOOL)a0 needCursor:(BOOL)a1;
- (void)updateLayoutFrom:(id)a0 to:(id)a1;
- (void)bindTabDefine:(id)a0 toBtn:(id)a1;
- (void)updateCursor;
- (void)didMoveToWindow;
- (void)layoutContainer;
- (void)sizeToFitButtons;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cursorFrameForView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSelectedIdx:(long long)a0;
- (void)onClickButton:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
