@class NSString, UIView;
@protocol BDPGameFacialRecognitionViewDelegate;

@interface BDPGameFacialRecognitionView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *nameMask;
@property (copy, nonatomic) NSString *facialTips;
@property (weak, nonatomic) id<BDPGameFacialRecognitionViewDelegate> viewDelegate;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) NSString *payType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getButton;
- (BOOL)showFromParentView:(id)a0 completion:(id /* block */)a1;
- (BOOL)dismissViewWithAnimate:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 buildBlk:(id /* block */)a1;
- (void)onReject;
- (void)onAccept;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setupUI;

@end
