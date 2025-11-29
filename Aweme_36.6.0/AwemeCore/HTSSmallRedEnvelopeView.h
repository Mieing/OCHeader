@class BoxListResponse_ResponseData, RACDisposable, UIImageView, HTSRedEnvelopeStore, UIView, UILabel, HTSPaddingLabel;
@protocol HTSRedEnvelopeActions;

@interface HTSSmallRedEnvelopeView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIView *centerBgView;
@property (retain, nonatomic) UIView *bgImageSizeView;
@property (retain, nonatomic) UIImageView *headImageView;
@property (retain, nonatomic) UIImageView *backgourndImageView;
@property (retain, nonatomic) HTSPaddingLabel *countDownLabel;
@property (retain, nonatomic) UIImageView *envelopeBtn;
@property (retain, nonatomic) UILabel *redDotLabel;
@property (retain, nonatomic) UIImageView *reddotImageView;
@property (nonatomic) BOOL isTrggerCountdownTemporary;
@property (retain, nonatomic) id<HTSRedEnvelopeActions> redEnvelopeActionsCreator;
@property (retain, nonatomic) RACDisposable *redEnvelopeDisposable;
@property (weak, nonatomic) HTSRedEnvelopeStore *store;
@property (retain, nonatomic) UILabel *tempStatusNumLabel;
@property (retain, nonatomic) UILabel *tempStatusTitleLabel;
@property (retain, nonatomic) BoxListResponse_ResponseData *redEnvelope;
@property (copy, nonatomic) id /* block */ stopTempStatusCompletion;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)a0;
- (id)shakeAnimation;
- (void)doShakeAnimation;
- (void)startTempStatus;
- (void)stopTempStatus;
- (void)updateTempStatusNumLabel;
- (void)updateCountDownSecond:(long long)a0;
- (void)bindWith:(id)a0;
- (void)updateRemainCount:(id)a0;
- (void)startFinishAnimation;
- (void)stopFinishAnimation;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)refreshLayout;

@end
