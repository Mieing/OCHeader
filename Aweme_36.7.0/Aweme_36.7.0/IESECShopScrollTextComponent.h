@class IESECShopTextComponent, NSString, UIFont, IESECShopScrollTextComponentModel, UIView;
@protocol IESECShopScrollTextComponentDelegate;

@interface IESECShopScrollTextComponent : UIView <CAAnimationDelegate, IESECShopComponentProtocol, IESECShopScrollTextProtocol> {
    IESECShopScrollTextComponentModel *_model;
    BOOL _needRelayout;
    double _expectWidth;
    id /* block */ _animationBlock;
    unsigned long long _state;
    id /* block */ _completion;
    double _fontScaleRatio;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) IESECShopTextComponent *textComponent;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedTextContentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicTextContentSize;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<IESECShopScrollTextComponentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIFont *font;

- (void)resetOffset;
- (void)updateColorWithPercent:(double)a0;
- (id)initWithModel:(id)a0 fontScaleRatio:(double)a1;
- (void)redoAnimation;
- (void)calculateExpectWidth;
- (void)reLayoutViewsIfNeeded;
- (void)startScroll:(id /* block */)a0;
- (void)animationDidStart:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updateWithModel:(id)a0;

@end
