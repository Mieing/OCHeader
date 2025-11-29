@class UILabel, DUXLoadingParticleView;

@interface AWEGeneralFullpageFooterView : UIView

@property (retain, nonatomic) UILabel *textlabel;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;

- (void)showTextLabel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)startLoadingAnimation;

@end
