@interface WCAdCardClickEventManager : MMObject

+ (id)getInstance;

- (BOOL)onClickEventFiredWithActionInfo:(id)a0 dataItem:(id)a1 cardType:(long long)a2 contentItemScene:(unsigned long long)a3 clickPos:(long long)a4 clickIndex:(int)a5 extInfo:(id)a6;
- (BOOL)canJumpToCanvasWithAdInfo:(id)a0;
- (BOOL)canJumpToGestureCanvasWithAdInfo:(id)a0;
- (void)jumpToCustomerServiceWithActionInfo:(id)a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2 clickIndex:(int)a3 originView:(id)a4;
- (void)handleCustomerServiceContactWithResult:(BOOL)a0 contact:(id)a1 jumpParams:(id)a2;
- (id)getAdActionLinkWithActionInfo:(id)a0 adInfo:(id)a1;
- (void)reportClick:(id)a0 contentItemScene:(unsigned long long)a1 clickPos:(long long)a2 clickIndex:(int)a3 clickActionType:(long long)a4;
- (void)reportClickWithActionInfo:(id)a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2 clickPos:(long long)a3 clickIndex:(int)a4 clickActionType:(long long)a5;
- (id)createClickPageWrap:(id)a0 contentItemScene:(unsigned long long)a1 clickPos:(long long)a2 clickIndex:(int)a3 clickActionType:(long long)a4;
- (id)createClickPageWrapWithActionInfo:(id)a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2 clickPos:(long long)a3 clickIndex:(int)a4 clickActionType:(long long)a5;
- (void)reportClick:(id)a0;

@end
