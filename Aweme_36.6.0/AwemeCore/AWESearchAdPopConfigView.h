@class UIButton, NSString, UIView, BDImageView;
@protocol AWESearchAdPopConfigViewDelegate;

@interface AWESearchAdPopConfigView : UIView <AWESearchAdPopConfigViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDImageView *pendantImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) struct CGSize { double width; double height; } animationSize;
@property (weak, nonatomic) id<AWESearchAdPopConfigViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonClicked;
- (void)startAnimationWith:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)handleTap:(id)a0;
- (void)updateWith:(id)a0;

@end
