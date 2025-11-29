@class CAGradientLayer, NSString, UIImageView, UIView, NSMutableArray;

@interface IESECWinReplayCollectionVideoCoverView : UIView <UIGestureRecognizerDelegate, IESECLLComponent> {
    double _radius;
    unsigned long long _cornerMask;
    BOOL _showTag;
    BOOL _showBottomGradient;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSMutableArray *tagViews;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) id /* block */ clickCoverBlock;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)coverWithSize:(struct CGSize { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 cornerRadius:(double)a2 showTag:(BOOL)a3 showBottomGradient:(BOOL)a4;
+ (id /* block */)coverWithSize:(struct CGSize { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 cornerRadius:(double)a2 cornerMask:(unsigned long long)a3 showTag:(BOOL)a4 showBottomGradient:(BOOL)a5;

- (void)updateUIWithModel:(id)a0;
- (void)addBottomGradientView;
- (void)updateTagWithModel:(id)a0;
- (void)setUpTagConstraintsWithTag:(id)a0 imageView:(id)a1;
- (void)clickCoverView:(id)a0;
- (id)initWithRadius:(double)a0 cornerMask:(unsigned long long)a1 showTag:(BOOL)a2 showBottomGradient:(BOOL)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
