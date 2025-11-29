@protocol BDADLivePromptViewProtocol;

@interface BDADLivePromptViewManager : NSObject

@property (retain, nonatomic) id<BDADLivePromptViewProtocol> implInstance;
@property (copy, nonatomic) id /* block */ promptViewDisappearingBlock;
@property (copy, nonatomic) id /* block */ promptViewCloseBtnTapDisappearingBlock;
@property (copy, nonatomic) id /* block */ getLiveRoomInfoBlock;

- (id /* block */)promptViewDisappearingBlock;
- (void)setPromptViewDisappearingBlock:(id /* block */)a0;
- (id /* block */)promptViewCloseBtnTapDisappearingBlock;
- (void)setPromptViewCloseBtnTapDisappearingBlock:(id /* block */)a0;
- (id /* block */)getLiveRoomInfoBlock;
- (void)setGetLiveRoomInfoBlock:(id /* block */)a0;
- (void)setupCardWithModel:(id)a0 parentView:(id)a1;
- (id)contentViewOfCard;
- (void)showInContainer:(id)a0 cardSize:(struct CGSize { double x0; double x1; })a1 completionBlock:(id /* block */)a2;
- (void)hideNewLiveCard:(id)a0 completionBlock:(id /* block */)a1;
- (void)disappearFromRightToLeft;
- (void)updateJSBridgeCardStatus:(id)a0;
- (id)viewOfWebviewController;
- (void).cxx_destruct;
- (id)impl;
- (void)reset;
- (void)cancel;
- (id)mediator;

@end
