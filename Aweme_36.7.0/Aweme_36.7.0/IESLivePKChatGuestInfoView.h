@class UIView, NSString, UIImageView, IESLiveGCDTimer, UIButton, NSMutableAttributedString, UILabel, IESLivePKGuestScoreView;
@protocol IESLiveCompoundSubscription, IESLiveInteractUserModel;

@interface IESLivePKChatGuestInfoView : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSMutableAttributedString *attributedStr;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveGCDTimer *connectTimer;
@property (retain, nonatomic) UIView *silenceView;
@property (retain, nonatomic) UIImageView *silenceImageView;
@property (retain, nonatomic) IESLivePKGuestScoreView *scoreView;
@property (copy, nonatomic) id /* block */ onCloseButtonClicked;
@property (copy, nonatomic) id /* block */ onUserViewClicked;
@property (readonly, nonatomic) id<IESLiveInteractUserModel> guest;
@property (copy, nonatomic) NSString *coinImageName;
@property (nonatomic) BOOL isAudio;
@property (nonatomic) double timeStamp;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL isPreView;
@property (nonatomic) BOOL muteByLocal;

- (void)didTapInfoView;
- (void)updateWithGuest:(id)a0;
- (void)p_disposable;
- (void)setupRecognizer;
- (void)updateSilenceView;
- (void)setupNameLabelConstraints;
- (void)onScoreViewClicked;
- (id)attributedStringWithNickname:(id)a0;
- (void)updateGuestScoreView:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andEnableRadius:(BOOL)a1;
- (void)startBreatheAnimation;
- (void).cxx_destruct;
- (BOOL)isConnecting;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)loadView;
- (double)fontScale;

@end
