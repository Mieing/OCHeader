@class TTTextLayoutPage;
@protocol TTTextDrawerDelegate;

@interface BDPNovelContentView : UIView

@property (weak, nonatomic) TTTextLayoutPage *layoutPage;
@property (weak, nonatomic) id<TTTextDrawerDelegate> drawerDelegate;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTextLayout:(id)a0;

@end
