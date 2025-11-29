@class MMWebImageView, UIImageView, ContactUpdateHelper, NSDictionary, UIView, UIButton;
@protocol WCRedEnvelopesReceiveHomeViewDelegate;

@interface WARedEnvelopesReceiveHomeView : MMUIView {
    id<WCRedEnvelopesReceiveHomeViewDelegate> m_delegate;
    UIImageView *m_backgroundView;
    UIButton *openRedEnvelopesButton;
    UIImageView *openAnimationImageView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_frame;
    NSDictionary *m_dicBaseInfo;
    BOOL m_bSuccessAnmation;
    UIView *oRedView;
    UIView *oTopHeaderView;
    UIView *imageView;
    UIButton *cancel2Button;
    MMWebImageView *maskImageView;
}

@property (retain, nonatomic) ContactUpdateHelper *m_nickNameHelper;
@property (retain, nonatomic) ContactUpdateHelper *m_successOpenNickNameHelper;

- (void)refreshViewWithData:(id)a0;
- (BOOL)shouldShowBottomDescriptionWithType:(unsigned long long)a0 envelopeStutus:(unsigned long long)a1;
- (BOOL)shouldShowDetailButtonWithIsSender:(BOOL)a0 Type:(unsigned long long)a1 ReceiveStutus:(unsigned long long)a2 envelopeStutus:(unsigned long long)a3 data:(id)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andData:(id)a1 delegate:(id)a2;
- (BOOL)accessibilityPerformEscape;
- (void)OnCancelButtonDone;
- (void)OnOpenList;
- (void)OnOpenRedEnvelopes;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)removeView;
- (void)showSuccessOpenAnimation;
- (id)convertToImage:(id)a0;
- (void).cxx_destruct;

@end
