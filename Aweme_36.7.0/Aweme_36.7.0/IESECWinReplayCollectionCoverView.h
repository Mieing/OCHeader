@class UIImageView, NSString, UIView;

@interface IESECWinReplayCollectionCoverView : UIView <UIGestureRecognizerDelegate, IESECLLComponent> {
    double _radius;
    unsigned long long _cornerMask;
    unsigned long long _index;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ clickCoverBlock;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)coverWithSize:(struct CGSize { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 cornerRadius:(double)a2 cornerMask:(unsigned long long)a3 index:(unsigned long long)a4;
+ (id /* block */)coverWithSize:(struct CGSize { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 cornerRadius:(double)a2 index:(unsigned long long)a3;

- (void)updateUIWithModel:(id)a0;
- (void)clickCoverView:(id)a0;
- (id)initWithRadius:(double)a0 cornerMask:(unsigned long long)a1 index:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
