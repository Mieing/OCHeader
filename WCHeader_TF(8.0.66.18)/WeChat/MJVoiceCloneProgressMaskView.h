@class MMUIButton;
@protocol MJVoiceCloneProgressMaskViewDelegate;

@interface MJVoiceCloneProgressMaskView : WCProgressMaskView

@property (retain, nonatomic) MMUIButton *cancelButton;
@property (weak, nonatomic) id<MJVoiceCloneProgressMaskViewDelegate> mj_delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)cancelButtonDidTouchUpInside:(id)a0;
- (void).cxx_destruct;

@end
