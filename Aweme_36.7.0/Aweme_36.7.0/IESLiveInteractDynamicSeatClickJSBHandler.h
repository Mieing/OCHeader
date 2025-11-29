@interface IESLiveInteractDynamicSeatClickJSBHandler : IESLiveInteractDynamicJSBHandler

- (void)handleSeatClick:(unsigned long long)a0 seatIndex:(long long)a1;
- (void)didTapSlotView:(long long)a0 clickType:(unsigned long long)a1;
- (void)didClickFantiView:(long long)a0;
- (void)onClickedSelfDisciplineRecord:(id)a0;
- (void)onAudioClick:(long long)a0 clickType:(unsigned long long)a1;
- (id)jsb_update_seat_click:(id)a0 context:(id)a1;

@end
