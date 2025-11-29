@class UIImageView, MMFinderLiveMemberSignView, MMFinderLiveGlobalRankSignView, NSMutableArray, NSString, MMUILabel, MMUIView, MMFinderLiveGameRankSignView, MMFinderLiveFansGroupSignView, MMFinderLiveGameEsportSignView, MMFinderLiveProductQuestionSignView, MMFinderLiveLiveRoleSignView, MMFinderLiveNormalTextSignView;

@interface MMFinderLiveTableStyleTextCommentLikeNotifyCell : MMFinderLiveTableStyleCommentPubbleCell <ILinkEventExt>

@property (nonatomic) unsigned long long badgeSignCnt;
@property (retain, nonatomic) UIImageView *barrageSignIconView;
@property (retain, nonatomic) MMFinderLiveProductQuestionSignView *barrageProductQueSignView;
@property (retain, nonatomic) MMUILabel *signLabel;
@property (retain, nonatomic) MMUIView *signBackView;
@property (retain, nonatomic) MMFinderLiveProductQuestionSignView *productQuestionSignView;
@property (retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView;
@property (retain, nonatomic) MMFinderLiveMemberSignView *memberSignView;
@property (retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView;
@property (retain, nonatomic) MMFinderLiveGameRankSignView *gameRankSignView;
@property (retain, nonatomic) MMFinderLiveGameEsportSignView *gameEsportSignView;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *roleSignView;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *buySignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *frequentWatchSignView;
@property (retain, nonatomic) MMFinderLiveNormalTextSignView *followerSignView;
@property (retain, nonatomic) NSMutableArray *signViewArraryForLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCellFrame:(id)a0;
- (void)updateBackGroundColor;
- (void)layoutUI;
- (BOOL)needSignLabel;
- (void)updateSignLabelOrigins;
- (void)layoutCommentLabel;
- (BOOL)reuseWithCellFrame:(id)a0;
- (BOOL)isUITypeValid;
- (id)signText;
- (void)layoutSignLabel;
- (void)layoutGlobalRankSignView;
- (void)layoutMysteriousSignView;
- (void)layoutProductQuestionSignView;
- (void)layoutLiveRoleSignView;
- (void)layoutFansGroupSignView;
- (void)layoutGameEsportSignView;
- (void)layoutGameRankSignView;
- (void)layoutBuySignView;
- (void)layoutFrequentWatchSignView;
- (void)layoutFollowerSignView;
- (void)layoutMemberSignView;
- (void)updateCommentLabelOrigin;
- (void)updateSignViewOrigins;
- (void)expandIntroductionTextView;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
