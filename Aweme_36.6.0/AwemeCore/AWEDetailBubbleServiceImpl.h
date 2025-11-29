@class NSString, DUXPopover, AWEBizUIBubble;
@protocol AWEDetailViewModelProtocol;

@interface AWEDetailBubbleServiceImpl : NSObject <AWEDetailBubbleService>

@property (weak, nonatomic) id<AWEDetailViewModelProtocol> stateContext;
@property (retain, nonatomic) AWEBizUIBubble *welfareHintBubble;
@property (retain, nonatomic) AWEBizUIBubble *favoriteHintBubble;
@property (retain, nonatomic) DUXPopover *welfareDUXPopover;
@property (retain, nonatomic) DUXPopover *favoriteDUXPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_getWelfareActivityModel;
- (void)dismissWelfareHintBubble;
- (void)showFavoriteHintBubbleOverView:(id)a0 anchorView:(id)a1 hintContent:(id)a2 tapBlock:(id /* block */)a3;
- (void)showWelfareHintBubbleOnView:(id)a0 anchorView:(id)a1;
- (void)showFavoriteHintBubbleOnView:(id)a0 anchorView:(id)a1 tapBlock:(id /* block */)a2;
- (void)showFavoriteHintBubbleOverView:(id)a0 anchorView:(id)a1 tapBlock:(id /* block */)a2;
- (void)dismissFavoriteHintBubble;
- (id)initWithStateContext:(id)a0;
- (void).cxx_destruct;

@end
