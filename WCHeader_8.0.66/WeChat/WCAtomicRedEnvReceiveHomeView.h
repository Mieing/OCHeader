@class UIImageView, NSDictionary, UIView, UIButton;
@protocol WCAtomicRedEnvReceiveHomeViewDelegate;

@interface WCAtomicRedEnvReceiveHomeView : MMUIView {
    id<WCAtomicRedEnvReceiveHomeViewDelegate> m_delegate;
    UIImageView *m_oBackgroundView;
    UIButton *m_oOpenRedEnvelopesButton;
    UIImageView *m_oOpenAnimationImageView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_oFrame;
    NSDictionary *m_dicBaseInfo;
    BOOL m_bChecked;
    UIButton *checkedButton;
    BOOL m_bEndAnmation;
    UIView *m_oRedView;
    UIView *m_oTopHeaderView;
    UIImageView *imageView;
}

- (void)refreshViewWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andData:(id)a1 delegate:(id)a2;
- (void)OnCancelButtonDone;
- (void)OnOpenList;
- (void)OnOpenRedEnvelopes;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)removeView;
- (void)showSuccessOpenAnimation;
- (void)OnCheckChanged;
- (void).cxx_destruct;

@end
