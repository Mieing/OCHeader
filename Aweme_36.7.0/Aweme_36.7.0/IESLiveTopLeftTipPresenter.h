@class HTSEventContext;

@interface IESLiveTopLeftTipPresenter : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)initWithDIContext:(id)a0;
- (void)showTopLeftTipWithMessage:(id)a0 atBottomOf:(id)a1;
- (void)removeTopLeftTipView:(id)a0;
- (void)p_tipDidShow:(id)a0 message:(id)a1 attachingView:(id)a2;
- (void)tapToolbarTip:(id)a0 message:(id)a1 showTrackParams:(id)a2;
- (void).cxx_destruct;

@end
