@class NSString, UIImageView, UIView, UIButton;
@protocol WCRedEnvelopesMadeHBSuccessViewDelegate;

@interface WCRedEnvelopesMadeHBSuccessView : MMUIView <IUiUtilExt> {
    id<WCRedEnvelopesMadeHBSuccessViewDelegate> m_delegate;
    UIImageView *m_backgroundView;
    UIButton *openRedEnvelopesButton;
    BOOL m_bEndAnmation;
    UIView *oRedView;
    UIView *oTopHeaderView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)initUIWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)OnCancelButtonDone;
- (void)OnSendHBDone;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)removeView;
- (void)onMainWindowFrameChanged;
- (void).cxx_destruct;

@end
