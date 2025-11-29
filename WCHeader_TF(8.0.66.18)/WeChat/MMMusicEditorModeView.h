@class UILabel;
@protocol MMMusicEditorModeViewDelegate;

@interface MMMusicEditorModeView : MMUIView

@property (retain, nonatomic) UILabel *dotLabel;
@property (retain, nonatomic) UILabel *noDotLabel;
@property (nonatomic) unsigned long long mode;
@property (weak, nonatomic) id<MMMusicEditorModeViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)internalInit;
- (void)initWithMode:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)onTap:(id)a0;
- (void).cxx_destruct;

@end
