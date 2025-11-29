@class AWEPlayInteractionContext;
@protocol AWEVideoPaymentPresenterDelegate;

@interface AWEVideoPaymentBasePresenter : NSObject

@property (weak, nonatomic) id<AWEVideoPaymentPresenterDelegate> delegate;
@property (weak, nonatomic) AWEPlayInteractionContext *context;

+ (BOOL)shouldActiveWithData:(id)a0 referString:(id)a1 logExtra:(id)a2;

- (void)didClickCloseButton;
- (BOOL)shouldShowViewWithPeriod:(double)a0;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (BOOL)shouldDisableProgress;
- (id)initWithView:(id)a0 model:(id)a1 referString:(id)a2 logExtra:(id)a3 context:(id)a4;
- (BOOL)shouldCheckViewStatusWhenDisplay;
- (void)checkVideoShouldUnlockIfNeed;
- (void)didClickBuyButton;
- (void)hasShownView;
- (void)didClickRepurchaseButton:(BOOL)a0;
- (id)buySchemaParameters;
- (void)didClickBuyButton:(id)a0;
- (void)updateUnlockProgressWithModel:(id)a0;
- (void)didClickBuyPlayletVIPButton;
- (void)didClickFreeWatchButton:(id)a0;
- (void)updateDetailViewWithNewModel:(id)a0;
- (void)updateCoverImageWithImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)reportMaskViewShow;
- (BOOL)shouldShowReserveView;
- (void)didClickIAAUnlockButton;
- (BOOL)shouldStopVideoPlayWhenPreviewEnd;
- (void)updateRepurchaseButtonStatus;
- (void).cxx_destruct;
- (void)willDisplay;

@end
