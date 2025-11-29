@class BDADWindmillModel, UIImageView, BDADLivePromptViewManager, BDImageView;

@interface BDADLiveComponentsManager : NSObject

@property (retain, nonatomic) BDImageView *motionEntranceImageView;
@property (retain, nonatomic) BDADWindmillModel *adInfo;
@property (retain, nonatomic) UIImageView *entranceImageView;
@property (retain, nonatomic) BDADLivePromptViewManager *adPromptManager;
@property (copy, nonatomic) id /* block */ cardDisappearCompletionBlock;
@property (copy, nonatomic) id /* block */ getLiveRoomInfoBlock;
@property (copy, nonatomic) id /* block */ closeBtnTapToDisappearCardCompletionBlock;

- (id)contentViewOfCard;
- (void)updateJSBridgeCardStatus:(id)a0;
- (void)configEntranceImageView:(id)a0;
- (void)startMotionAnimationIfNeeded;
- (void)showNewStyleCardInNewContainerView:(id)a0 cardSize:(struct CGSize { double x0; double x1; })a1 completionBlock:(id /* block */)a2;
- (void)hideNewStyleCardView:(id)a0 completionBlock:(id /* block */)a1;
- (void)cardDisappearFromRightToLeft;
- (void)configAdInfoForCardView:(id)a0 parentView:(id)a1;
- (void).cxx_destruct;
- (id)cardView;

@end
