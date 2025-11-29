@class BDADLiveCommercialNewStyleNativeCardView, BDADLiveRoomCardModel;

@interface BDADLiveCommercialNewStyleCardView : UIView <HTSLivePluginLayoutView, IESADLivePluginLayoutView>

@property (retain, nonatomic) BDADLiveCommercialNewStyleNativeCardView *nativeCardView;
@property (retain, nonatomic) BDADLiveRoomCardModel *cardModel;
@property (copy, nonatomic) id /* block */ cardClickBlock;
@property (copy, nonatomic) id /* block */ closeBtnTapToDisappearCardCompletionBlock;

- (void)configCardData:(id)a0;
- (void)hideCompletion;
- (struct CGSize { double x0; double x1; })adPluginLayoutContentSize;
- (id)adViewType;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)cardTapped:(id)a0;
- (void).cxx_destruct;
- (id)viewType;

@end
