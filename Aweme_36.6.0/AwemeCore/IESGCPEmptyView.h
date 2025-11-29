@class IESGCPEmptyViewConfig, NSString, UIImageView, UIView, UILabel, UIButton;

@interface IESGCPEmptyView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESGCPEmptyViewConfig *config;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UILabel *remindLabel;
@property (retain, nonatomic) UILabel *auxiliaryLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImageView *buttonRightIcon;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveNetworkErrorViewWithStyle:(long long)a0 retryBlock:(id /* block */)a1;

- (void)updateConfig:(id)a0;
- (void)onButtonClicked;
- (struct CGSize { double x0; double x1; })containerViewSize;
- (struct CGSize { double x0; double x1; })getViewSize;
- (void)layoutButton:(id)a0;
- (double)p_renderUI;
- (void)layoutPlaceholderImageView;
- (void)layoutRemindLabel:(id)a0;
- (void)layoutAuxiliaryLabel:(id)a0 withTopOffset:(long long)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithConfig:(id)a0;

@end
