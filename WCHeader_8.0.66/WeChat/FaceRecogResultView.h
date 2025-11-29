@class UIImageView, UILabel, UIView, UIButton;

@interface FaceRecogResultView : MMUIView {
    UILabel *_waitLabel;
    UIImageView *_loadingBlurView;
    UIImageView *_loadingIndicator;
    UIView *_faceIconBgView;
    UIImageView *_faceIcon;
    UIButton *_closeButton;
    UIButton *_feedbackButton;
}

@property (retain, nonatomic) UIButton *bizCustomButton;
@property (retain, nonatomic) UILabel *subDescLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property (nonatomic) double faceTipsTopOffset;
@property (nonatomic) BOOL showIconFromFaceCenter;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetView;
- (void)showLoadingWithTip:(id)a0;
- (void)startLoadingAnimate;
- (void)showFeedBackBtn:(id)a0 sel:(SEL)a1;
- (void)showCloseBtn:(id)a0 strongStyle:(BOOL)a1 target:(id)a2 sel:(SEL)a3;
- (void)showBizBtn:(id)a0 target:(id)a1 sel:(SEL)a2;
- (void)showFailedTip:(id)a0;
- (void)showFailedTip:(id)a0 subDesc:(id)a1;
- (void)showOKView;
- (void)stopLoading;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTipIconFrame;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
