@class UIButton, RACDisposable, UIImageView, NSString, UILabel, UIView, IESLivePaidLinkmicExplainStarView;
@protocol IESLiveRoomService;

@interface IESLivePaidLinkmicExplainCard : UIView

@property (retain, nonatomic) UIView *explainCardContainer;
@property (retain, nonatomic) UIImageView *gradientBGImage;
@property (retain, nonatomic) UIImageView *titleIcon;
@property (retain, nonatomic) UIImageView *closeBtn;
@property (retain, nonatomic) UIImageView *avatarIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *linkTimesLabel;
@property (retain, nonatomic) IESLivePaidLinkmicExplainStarView *starView;
@property (retain, nonatomic) UIButton *applyButton;
@property (retain, nonatomic) UIView *guideMicContainer;
@property (retain, nonatomic) UILabel *guideMictitleLabel;
@property (retain, nonatomic) UIImageView *guideMicBtnIcon;
@property (retain, nonatomic) RACDisposable *loopDispose;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) id /* block */ applyConnectCallback;
@property (copy, nonatomic) id /* block */ closeCallback;
@property (copy, nonatomic) id /* block */ isLinkMicAudienceCallback;
@property (copy, nonatomic) NSString *functionType;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

+ (struct CGSize { double x0; double x1; })cardSize;

- (void)p_setupSubviews;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)didTapCloseBtn;
- (void)updateWithTitleIconImages:(id)a0 avatarImages:(id)a1 linkTimes:(long long)a2 score:(double)a3;
- (void)trackShowWithFunctionType:(id)a0;
- (void)showGuideMicCard;
- (void)updateIsAnchor:(BOOL)a0;
- (void)trackEmptySeatShowWithActionType:(id)a0;
- (void)tapChangeBtn;
- (void)didTapApplyConnectBtn;
- (void)didGuideApplyConnectBtn;
- (void)tapChangeBtnWithTrack:(BOOL)a0;
- (void)trackCloseWithActionType:(id)a0;
- (id)p_trackParamsWithFunctionType:(id)a0 actionType:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
