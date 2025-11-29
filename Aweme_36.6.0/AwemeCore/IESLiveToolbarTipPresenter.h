@class NSDictionary, HTSEventContext;

@interface IESLiveToolbarTipPresenter : NSObject

@property (copy, nonatomic) NSDictionary *toolbarItemIdentifierMap;
@property (copy, nonatomic) NSDictionary *toolbarItemLocationFromMap;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)initWithDIContext:(id)a0;
- (BOOL)checkByMsgProcessFilter:(id)a0;
- (void)showToolbarTipOn:(id)a0 richTextPieces:(id)a1 backgroundImage:(id)a2 arrowImage:(id)a3 trackParams:(id)a4 tapAction:(id /* block */)a5 completion:(id /* block */)a6;
- (void)showToolBarTipWithMessage:(id)a0;
- (void)setupToolbarItemIdentifierMap;
- (void)setupToolbarItemLocationFromMap;
- (void)p_showToolbarTipWithRichTextPieces:(id)a0 backgroundImage:(id)a1 arrowImage:(id)a2 atTopOf:(id)a3 toolbarItemIdentifier:(id)a4 item:(id)a5 trackParams:(id)a6 tapAction:(id /* block */)a7 completion:(id /* block */)a8;
- (void)p_tipDidShow:(id)a0 item:(id)a1 attachingView:(id)a2 trackParams:(id)a3 duration:(double)a4 actionType:(int)a5 tapAction:(id /* block */)a6;
- (BOOL)isHonorBuffTipMessage:(id)a0;
- (BOOL)checkMessageTypeBattlePropEffectFilter:(id)a0;
- (void)showTipView:(id)a0 item:(id)a1;
- (id)locationFromToolbarItemId:(int)a0;
- (id)toolbarItemIdentifierFromToolbarItemMessage:(id)a0;
- (void)removeToolbarTipView:(id)a0 exclusiveViewItem:(id)a1;
- (void)recordMessageTypeBattlePropEffect:(id)a0;
- (void)p_tapToolbarTip:(id)a0 item:(id)a1 autoRemoveTimer:(id)a2 trackParams:(id)a3 tapAction:(id /* block */)a4;
- (void).cxx_destruct;

@end
