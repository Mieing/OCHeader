@class NSString, UIImageView, RichTextView, UIButton;
@protocol WCBizTipViewDelegate;

@interface WCBizTipView : UIView <CAAnimationDelegate, ILinkEventExt> {
    NSString *_title;
    NSString *_content;
    NSString *_imageName;
    UIImageView *_backgroundView;
    UIImageView *contentImageView;
    RichTextView *richTextView;
}

@property (retain, nonatomic) UIButton *backgroundCloseBtn;
@property (weak, nonatomic) id<WCBizTipViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTittle:(id)a1 andContent:(id)a2 andImage:(id)a3;
- (void)initView;
- (void)showAnimation;
- (void)dealloc;
- (void)onCloseIntroView;
- (id)getContentImageView;
- (void).cxx_destruct;

@end
