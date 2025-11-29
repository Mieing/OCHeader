@class NSString, UIView;
@protocol AnnieXContainerBaseProtocol, AWEECShoppingAIGuideTopFloatViewDelegate;

@interface AWEECShoppingAIGuideTopFloatView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *cardView;
@property (nonatomic) double cardViewHeight;
@property (weak, nonatomic) id<AWEECShoppingAIGuideTopFloatViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)buildCardViewWithLynxModel:(id)a0 type:(long long)a1;
- (void)addCardViewIfNeeded;
- (void)createCardViewWithLynxModel:(id)a0 cardType:(long long)a1;
- (void).cxx_destruct;

@end
