@class IESLiveAudienceInteractiveInvitorView, UIImageView, UILabel, UIView;

@interface IESLiveAudienceInteractiveNormalInfoView : UIView

@property (retain, nonatomic) UIImageView *locationIconView;
@property (retain, nonatomic) UILabel *applyTimeLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIView *infoSeperatorLineView;
@property (retain, nonatomic) IESLiveAudienceInteractiveInvitorView *invitorView;
@property (retain, nonatomic) UILabel *teamFightTeamLabel;
@property (nonatomic) BOOL isInPaidLinkmic;
@property (nonatomic) BOOL isAddPrice;
@property (nonatomic) BOOL showPayAmount;
@property (readonly, nonatomic) BOOL useFixedTextConfig;

+ (id)fixedLabelFont;

- (void)updateWithIsInPaidLinkmic:(BOOL)a0 isAddPrice:(BOOL)a1 showPayAmount:(BOOL)a2;
- (void)updateWithModel:(id)a0 now:(id)a1 sortStrategy:(long long)a2;
- (id)waitingDesStringWithModel:(id)a0 now:(id)a1 isAddPrice:(BOOL)a2;
- (void)setupTeamFightLabel:(long long)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (void)setupViews;

@end
