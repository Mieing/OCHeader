@class NSString;
@protocol WCPlainTextTipFullScreenViewDelegate;

@interface WCPlainTextTipFullScreenView : MMUIView <CAAnimationDelegate>

@property (weak, nonatomic) id<WCPlainTextTipFullScreenViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onIKnowItBtnClick:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBgImgViewFrameWithImgSize:(struct CGSize { double x0; double x1; })a0;
- (void)initView;
- (id)init;
- (void)layoutSubviews;
- (void)showAnimation;
- (void).cxx_destruct;

@end
