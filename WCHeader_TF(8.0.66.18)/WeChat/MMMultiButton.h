@class ZZMultiButtonChainModel, UIView;

@interface MMMultiButton : MMUIButton

@property (readonly, copy, nonatomic) ZZMultiButtonChainModel *zz_setup;
@property (nonatomic) long long multiButtonState;
@property (retain, nonatomic) UIView *normalView;
@property (retain, nonatomic) UIView *touchDownView;

+ (id /* block */)zz_create;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initEvents;
- (void)removeControlEvents:(unsigned long long)a0;
- (void)setTouchDownView:(id)a0 constraints:(id /* block */)a1;
- (void)setNormalView:(id)a0 constraints:(id /* block */)a1;
- (void).cxx_destruct;

@end
