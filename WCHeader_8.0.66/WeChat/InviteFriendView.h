@class UITextView, NSString, UIImageView, MMUIActivityIndicatorView;
@protocol InviteFriendViewDelegate;

@interface InviteFriendView : MMUIView <IMMQRCodeExt> {
    UIImageView *m_imageQRView;
    MMUIActivityIndicatorView *m_loadingView;
    UITextView *m_textView;
    id<InviteFriendViewDelegate> m_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 Title:(id)a1 Msg:(id)a2 Delegate:(id)a3 showQRImage:(BOOL)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 Title:(id)a1 Msg:(id)a2 Delegate:(id)a3;
- (void)onLeft;
- (void)onRight;
- (void)onDownloadQRCodeFinish:(id)a0 FooterWording:(id)a1 qrcodeStatus:(unsigned int)a2;
- (void).cxx_destruct;

@end
