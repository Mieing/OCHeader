@class IESECGoodsFeedResourceCardBuilder, IESECGoodsFeedResourceCardLynxViewController, IESECFeedResourceCardModel, BDXBridgeEventSubscriber, UIImageView, UIView;

@interface IESECGoodsFeedResourceCard : IESECGoodsFeedBaseCell {
    UIImageView *_backgroundView;
    UIView *_storeWhiteBackground;
}

@property (retain, nonatomic) IESECGoodsFeedResourceCardBuilder *cardBuilder;
@property (retain, nonatomic) IESECGoodsFeedResourceCardLynxViewController *lynxCardVC;
@property (retain, nonatomic) BDXBridgeEventSubscriber *bridgeEventSubscriber;
@property (readonly, nonatomic) IESECFeedResourceCardModel *resourceCardModel;

+ (double)heightOfResourceCard:(id)a0 withContentWidth:(double)a1;

- (void)__unregisterSubscriber;
- (void)__registerSubscribes;
- (void)resourceCardDidClick:(id)a0;
- (void)updateWithResourceCardModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setResourceCardShadow;
- (void)updateWithResourceCardModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)setupSubviews;
- (void)updateWithViewModel:(id)a0;

@end
