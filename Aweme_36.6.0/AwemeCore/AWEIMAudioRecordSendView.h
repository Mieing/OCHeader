@class UIImageView;

@interface AWEIMAudioRecordSendView : AWEIMDUXSelectedAlphaButton

@property (retain, nonatomic) UIImageView *loadingView;
@property (nonatomic) unsigned long long viewState;

- (void)p_DidBecomeActiveNoti:(id)a0;
- (void)p_checkLoadingAnimationWithViewState:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
