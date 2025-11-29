@class UIImageView, UILabel;

@interface WCBizLoadingView : UIView {
    UIImageView *m_imageView;
    UILabel *m_labelTitle;
    UILabel *m_labelMsg;
    UIImageView *backgroundView;
    UIImageView *m_logoView;
}

@property (nonatomic) BOOL m_bIgnoringInteractionEventsWhenLoading;

- (id)init;
- (void)autoLayoutInCenter;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setTitle:(id)a0;
- (void)setLogo:(id)a0;
- (void)usePayLogo;
- (void)setMessage:(id)a0;
- (void)startLoading;
- (void)stopLoading;
- (id)insideGetCurrentViewController;
- (void)updateFrame;
- (double)contentMaxWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void).cxx_destruct;

@end
