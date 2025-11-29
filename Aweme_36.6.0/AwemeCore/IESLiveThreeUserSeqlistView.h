@class HTSEventContext, NSString, IESLiveAudienceListModel, NSArray, NSMutableDictionary, IESLiveAudienceAvatarView, CAGradientLayer, IESLiveUserSeqlistStore, NSMutableArray, UIScrollView;
@protocol IESLiveRoomService;

@interface IESLiveThreeUserSeqlistView : UIView <UIScrollViewDelegate, IESLiveRoomProfileActions, IESLiveRoomSeqlist>

@property (nonatomic) BOOL hadShowAnimation;
@property (nonatomic) BOOL setuped;
@property (retain, nonatomic) id<IESLiveRoomService> liveRoomModel;
@property (retain, nonatomic) IESLiveUserSeqlistStore *seqListStore;
@property (retain, nonatomic) IESLiveAudienceAvatarView *firstUserView;
@property (retain, nonatomic) IESLiveAudienceAvatarView *secondUserView;
@property (retain, nonatomic) IESLiveAudienceAvatarView *thirdUserView;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAudienceListModel *listModel;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) CAGradientLayer *rightMaskLayer;
@property (nonatomic) double oldWidth;
@property (retain, nonatomic) NSArray *widthConstraints;
@property (retain, nonatomic) NSMutableArray *trackShowList;
@property (retain, nonatomic) NSMutableArray *userList;
@property (nonatomic) double recordTime;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (nonatomic) BOOL useFoldStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL preloading;

+ (id)initWithStore:(id)a0;

- (void)didSetAttachingDIContext;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)updateUsers:(id)a0;
- (void)showAudienceRankList;
- (void)refreshAudienceRankList:(id)a0;
- (void)refreshLiveRoomModel:(id)a0;
- (void)profileTempStateShow:(BOOL)a0;
- (void)updateUsers:(id)a0 withForceRefresh:(BOOL)a1;
- (long long)showScoreType;
- (void)clickUser:(id)a0 atIndex:(long long)a1;
- (void)trackAvatarShowWithIndex:(long long)a0;
- (long long)exactlyScope;
- (BOOL)enableExactlySetting;
- (BOOL)isSelfModel:(id)a0;
- (void)realEnterRoomRefresh;
- (void)setupSubViews;
- (void)showAnimation;
- (void).cxx_destruct;
- (id)viewType;
- (id)containerView;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
