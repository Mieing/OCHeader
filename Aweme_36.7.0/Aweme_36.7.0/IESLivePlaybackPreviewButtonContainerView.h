@class NSMutableArray, UIView;

@interface IESLivePlaybackPreviewButtonContainerView : UIView

@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) NSMutableArray *dividers;
@property (nonatomic) BOOL shouldLayout;
@property (retain, nonatomic) UIView *lineView;

- (void)replaceButtonAtIndex:(unsigned long long)a0 withButton:(id)a1;
- (void)appendButton:(id)a0;
- (void)replaceButton:(id)a0 withButton:(id)a1;
- (BOOL)containsButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
