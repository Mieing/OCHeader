@class UIButton, AWELiveCommercialNewStyleNativeCardView, AWEOriginalAdCardModel;

@interface AWELiveCommercialNewStyleCardView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) AWELiveCommercialNewStyleNativeCardView *nativeCardView;
@property (retain, nonatomic) AWEOriginalAdCardModel *cardModel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (copy, nonatomic) id /* block */ cardClickBlock;
@property (copy, nonatomic) id /* block */ closeBtnTapToDisappearCardCompletionBlock;

- (void)configCardData:(id)a0;
- (void)hideCompletion;
- (void)closeBtnTapped;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)updateNativeCardUI;
- (void)cardTapped:(id)a0;
- (void).cxx_destruct;
- (id)viewType;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
