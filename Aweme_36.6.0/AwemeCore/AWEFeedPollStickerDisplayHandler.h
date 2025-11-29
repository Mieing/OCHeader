@class UIViewController, UIView;
@protocol ACCStickerContentProtocol, AWEVoteStickerDetailViewControllerProtocol, ACCPollStickerViewProtocol;

@interface AWEFeedPollStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (nonatomic) BOOL voting;
@property (weak, nonatomic) UIView<ACCStickerContentProtocol, ACCPollStickerViewProtocol> *contentView;
@property (retain, nonatomic) UIViewController<AWEVoteStickerDetailViewControllerProtocol> *voteStickerDetailVC;

+ (BOOL)canDisplaySticker:(id)a0;

- (void)handleEventWithParams:(id)a0;
- (void)updateStickerState;
- (void)removeSticker:(BOOL)a0;
- (id)getTrackParams;
- (BOOL)canHandleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)displaySticker:(BOOL)a0;
- (BOOL)displayByNative;
- (BOOL)isShowStickerViewController;
- (void)seeVoteResult;
- (void)trackPollStickerMasterClick;
- (void)clickPollSticker:(struct CGPoint { double x0; double x1; })a0;
- (id)findBelongInteractionViewControllerForView:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)reset;
- (BOOL)blockAction;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)viewWillDisappear;

@end
