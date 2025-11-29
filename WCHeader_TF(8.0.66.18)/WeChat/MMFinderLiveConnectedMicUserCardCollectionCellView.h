@class MMLiveIconButton, UIView, MMLiveCDNPlayerView, MMFinderLiveConnectMicUser, NSString, WCFinderAuthInfoIconView, WCFinderHeadImageView, UILabel, MMUIActivityIndicatorView;
@protocol MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectedMicUserCardCollectionCellView : UICollectionViewCell <MMLiveCDNPlayerViewDelegate>

@property (retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUser;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCFinderHeadImageView *avatarView;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) MMLiveIconButton *iconButton;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) UIView *recommendationReasonView;
@property (retain, nonatomic) UILabel *recommendationReasonLabel;
@property (nonatomic) BOOL forceDisableOperationButton;
@property (nonatomic) unsigned long long sectionType;
@property (weak, nonatomic) id<MMFinderLiveConnectedMicUserCellViewDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ReuseIdentifier;
+ (double)getHeightWithWidth:(double)a0;

- (void)updateWithConnectMicUser:(id)a0;
- (void)updateSectionType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)resetState;
- (void)layoutUI;
- (void)configContainerView;
- (void)configAvatarView;
- (void)configAuthIconView;
- (void)configNickNameLabel;
- (void)configIconButton;
- (void)updateIconButton;
- (void)configActivityIndicatorView;
- (void)configCDNPlayerView;
- (void)configRecommendationReasonView;
- (void)onTapiconButton;
- (void)playWithSound:(BOOL)a0;
- (void)stop;
- (void).cxx_destruct;

@end
