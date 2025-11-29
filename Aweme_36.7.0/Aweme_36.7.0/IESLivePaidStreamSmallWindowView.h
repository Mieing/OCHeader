@class UILabel, NSString, UIView;
@protocol IESLivePaidStreamSmallWindowViewDelegate;

@interface IESLivePaidStreamSmallWindowView : UIView <IESLiveOnePipBizDecorationViewProtocol>

@property (weak, nonatomic) UIView *trialContainerView;
@property (weak, nonatomic) UILabel *trialInfoLabel;
@property (weak, nonatomic) UIView *trialFinishContainerView;
@property (weak, nonatomic) id<IESLivePaidStreamSmallWindowViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didShowSmallWindow;
- (void)didHideSmallWindow;
- (void)showInitial;
- (void)updateTrialInfo:(id)a0;
- (void)showTrialFinish;
- (void)showTrial;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
