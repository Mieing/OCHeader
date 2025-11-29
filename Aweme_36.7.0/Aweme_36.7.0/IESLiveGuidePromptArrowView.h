@interface IESLiveGuidePromptArrowView : UIView

@property (nonatomic) unsigned long long arrowDirection;

- (void)addArrowWith:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 direction:(unsigned long long)a1;

@end
