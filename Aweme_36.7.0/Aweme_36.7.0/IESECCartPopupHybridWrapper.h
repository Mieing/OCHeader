@class UIView, NSString, IESECCartHybridPopupConfig;
@protocol IESHYContainerProtocol;

@interface IESECCartPopupHybridWrapper : UIView <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) IESECCartHybridPopupConfig *popupConfig;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (nonatomic, getter=isOpen) BOOL open;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewInitialFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFinalFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closePanel;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)clickMask;
- (id)initWithPopupConfig:(id)a0;
- (void)setupWithPopupConfig:(id)a0;
- (void)modifyBgColor;
- (void)closeWithAnimated:(BOOL)a0 animationBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)animate;
- (void).cxx_destruct;
- (void)resize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initGesture;

@end
