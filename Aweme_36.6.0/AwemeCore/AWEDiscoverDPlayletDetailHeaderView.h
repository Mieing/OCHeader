@class UIView, AWEPaymentBadgeView, NSString, NSObject, UIImageView, UIButton, AWEPlayletDetailHeaderButtonGroupView, YYLabel, NSMutableAttributedString, AWEPlayletInfoModel, UILabel, NSNumber;
@protocol AWEPaymentEventHandlerProtocol, AWEChallengeDetailDescViewProtocol, AWEPaymentDetailEventHandlerProtocol, AWEPlayletDetailHeaderViewDelegate;

@interface AWEDiscoverDPlayletDetailHeaderView : UIView <AWEChallengeDetailDescViewDelegate, AWEDiscoverDPlayletNetworkServiceDelegate>

@property (retain, nonatomic) UIImageView *playletCoverView;
@property (retain, nonatomic) UIImageView *playletIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *authorLabel;
@property (retain, nonatomic) UIImageView *tailIcon;
@property (retain, nonatomic) NSMutableAttributedString *authorAttrString;
@property (retain, nonatomic) UILabel *updateCountLabel;
@property (retain, nonatomic) UILabel *continueWatchLabel;
@property (retain, nonatomic) UIView<AWEChallengeDetailDescViewProtocol> *descView;
@property (retain, nonatomic) UILabel *playTimesLabel;
@property (retain, nonatomic) UIView *seperateView;
@property (retain, nonatomic) AWEPlayletInfoModel *playletModel;
@property (nonatomic) double lastDescHeight;
@property (retain, nonatomic) AWEPlayletDetailHeaderButtonGroupView *buttonGroupView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) UIButton *paymentUserNoticeButton;
@property (retain, nonatomic) UILabel *expectedUpdateCompletionTimeLabel;
@property (weak, nonatomic) id<AWEPlayletDetailHeaderViewDelegate> delegate;
@property (nonatomic) double topOffset;
@property (nonatomic) BOOL fromPersonPage;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *fromGroupID;
@property (retain, nonatomic) NSNumber *continueEpisode;
@property (nonatomic) double mixButtonViewBottomOffset;
@property (retain, nonatomic) NSObject<AWEPaymentEventHandlerProtocol, AWEPaymentDetailEventHandlerProtocol> *paymentEventHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (void)tailIconTapped:(id)a0;
- (id)completionTimeText:(id)a0;
- (id)getDataYear:(id)a0;
- (void)needUpdateConstraits:(double)a0;
- (void)didSelectLinkWithURL:(id)a0;
- (void)refreshPlayletForPaymentVideosUpdate;
- (void)openPersonalPage;
- (BOOL)shouldShowExpectedCompletionTimeButton:(id)a0;
- (void)updateContinueString:(id)a0;
- (void)contiuePlayVideo;
- (void)paymentUserNoticeTapped:(id)a0;
- (void)updatePlayletID:(id)a0 lastEpisode:(id)a1;
- (void)updatePlayletInfo:(id)a0;
- (void)dismissHintBubble;
- (void)setHintTrackDict:(id)a0;
- (double)mixButtonViewBottomOffset;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (void)themeDidChange;

@end
