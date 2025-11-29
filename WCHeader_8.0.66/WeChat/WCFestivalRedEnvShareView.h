@class UIImageView, NSDictionary, UIView, WCRedEnvelopesControlData, UIButton;
@protocol WCFestivalRedEnvShareViewDelegate;

@interface WCFestivalRedEnvShareView : MMUIView {
    id<WCFestivalRedEnvShareViewDelegate> m_delegate;
    UIImageView *m_backgroundView;
    UIButton *openRedEnvelopesButton;
    UIImageView *openAnimationImageView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_frame;
    NSDictionary *m_dicBaseInfo;
    BOOL m_bSuccessAnmation;
    UIView *oRedView;
    UIView *oTopHeaderView;
    UIImageView *imageView;
    WCRedEnvelopesControlData *m_data;
}

- (void)refreshViewWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andData:(id)a1 delegate:(id)a2;
- (void)OnCancelButtonDone;
- (void)OnCacnelButtonDoneLogic;
- (void)OnOpenList;
- (void)OnOpenRedEnvelopes;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)removeView;
- (void)showSuccessOpenAnimation;
- (void).cxx_destruct;

@end
