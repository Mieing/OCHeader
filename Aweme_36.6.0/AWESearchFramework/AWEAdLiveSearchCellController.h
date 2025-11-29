@class AWESearchAdAssistEdgeInsetLabel, AWESearchLiveAssistLabel, UIImageView, AWESearchLiveOnlyStatusView, UIView, AWEAdTagView, NSString;
@protocol AWEAdSearchLiveECommerceProductCard, AWEAdSearchLiveInfoCard;

@interface AWEAdLiveSearchCellController : AWELiveSearchCellController <AWEAdSearchLiveECommerceProductCardDelegate>

@property (retain, nonatomic) UIView<AWEAdSearchLiveECommerceProductCard> *eCommerceProductCard;
@property (retain, nonatomic) UIView<AWEAdSearchLiveInfoCard> *liveInfoCardView;
@property (retain, nonatomic) AWEAdTagView *adTagView;
@property (retain, nonatomic) UIImageView *spotImageView;
@property (nonatomic) double adStartPlayerTime;
@property (retain, nonatomic) AWESearchLiveOnlyStatusView *statusView;
@property (retain, nonatomic) AWESearchAdAssistEdgeInsetLabel *assistView1;
@property (retain, nonatomic) AWESearchLiveAssistLabel *assistView2;
@property (nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__awe__codeRunnerRun___LINE__;

- (void)avatarClicked;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)openLiveWithProductID:(id)a0 index:(long long)a1;
- (void)openLiveWithProductID;
- (void)appendAdLabelInDescWithAdModel:(id)a0;
- (id)p_attributeStringForAdMoreLinkView:(id)a0;
- (void)didEndShowing;
- (void)didStartShowing;
- (void)usernameClicked;
- (void)resetShowStatusWithNotifcation:(id)a0;
- (void)updateLableUI;
- (void)liveViewTapped;
- (void)liveInfoCardTapped;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
