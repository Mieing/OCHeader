@class UIColor, UIView;
@protocol MMCopyLabelDelegate;

@interface MMCopyLabel : MMUILabel

@property (weak, nonatomic) UIView<MMCopyLabelDelegate> *delegate;
@property (retain, nonatomic) UIColor *highlightedBGColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)menuItemHidden:(id)a0;
- (void)longPressToCopy:(id)a0;
- (void).cxx_destruct;

@end
