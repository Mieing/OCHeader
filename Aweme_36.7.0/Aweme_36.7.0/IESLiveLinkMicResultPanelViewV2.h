@class IESLiveLinkMicResultPanelViewDataSource, UILabel, IESLiveLinkMicResultGridView, IESLiveLinkMicResultAPI, UIButton, UIView, UIScrollView, NSString, IESLiveLinkMicResultRankEntranceView, IESLiveLinkMicResultRecommendView, IESLiveLinkMicAudienceUserInfoInLinkmic, UIStackView, IESLivelinkmicAudienceRecommendItem;
@protocol IESHYContainerProtocol;

@interface IESLiveLinkMicResultPanelViewV2 : UIView <IESLiveLinkMicResultRecommendViewDelegate, IESLiveLinkMicResultPanelViewProtocol>

@property (retain, nonatomic) IESLiveLinkMicResultPanelViewDataSource *dataSource;
@property (retain, nonatomic) IESLiveLinkMicResultAPI *api;
@property (retain, nonatomic) IESLiveLinkMicAudienceUserInfoInLinkmic *userInfoInLinkmic;
@property (retain, nonatomic) IESLivelinkmicAudienceRecommendItem *recommendItem;
@property (nonatomic) BOOL isRequestingRecommend;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *textInfoLabel;
@property (retain, nonatomic) UIButton *feedbackBtn;
@property (retain, nonatomic) UIView *linkmicDataContainer;
@property (retain, nonatomic) IESLiveLinkMicResultGridView *gridView1;
@property (retain, nonatomic) IESLiveLinkMicResultGridView *gridView2;
@property (retain, nonatomic) IESLiveLinkMicResultGridView *gridView3;
@property (retain, nonatomic) IESLiveLinkMicResultRankEntranceView *rankEntranceView;
@property (retain, nonatomic) IESLiveLinkMicResultRecommendView *recommendContainer;
@property (retain, nonatomic) NSString *activityURL;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) UIScrollView *scrollContainerView;
@property (retain, nonatomic) UIStackView *stackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ issueFeedbackAction;
@property (copy, nonatomic) id /* block */ requestActivityCompletion;
@property (nonatomic) BOOL supportFeedback;

- (void)didSetAttachingDIContext;
- (void)onClickMore;
- (void)setupAPI;
- (void)traceBreakPageShow;
- (void)setupTextInfoLabel:(id)a0;
- (void)setupLinkmicDataContainer;
- (void)setupHybridContainerIfNeeded;
- (void)setupRecommendContainerIfNeeded;
- (void)onClickFeedbackAction;
- (void)traceMoreIconShow;
- (id)rankAttrString;
- (void)onClickRankEntrance;
- (void)traceUserListIconShow;
- (void)traceRoomShow;
- (id)connection_over_type;
- (id)contection_over_type_detail;
- (void)traceMoreIconClick;
- (void)traceUserListIconClick;
- (void)traceRoomClick:(id)a0;
- (BOOL)shouldAutoLinkWhenEnterOtherRoom;
- (id)icon_type;
- (void)recommendViewDidClickChange;
- (void)recommendViewDidClickLink;
- (void)recommendViewDidClickAvatar;
- (void).cxx_destruct;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1;

@end
