@class NSString, NSArray;
@protocol IESLiveRoomService;

@interface IESLiveAnchorAudienceInteractiveGameModel : IESLiveDynamicModel

@property (retain, nonatomic) id<IESLiveRoomService> liveRoom;
@property (nonatomic) long long gameId;
@property (copy, nonatomic) NSString *gameName;
@property (nonatomic) unsigned long long interactiveID;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSArray *iconURL;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *playRule;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSArray *domainAllowListArray;
@property (copy, nonatomic) NSString *developInfo;
@property (copy, nonatomic) NSString *exitBtnText;
@property (nonatomic) unsigned long long panelHeightType;
@property (nonatomic) unsigned long long businessType;
@property (nonatomic) BOOL shouldShowRewardNotice;
@property (nonatomic) BOOL shouldShowRevenueRank;
@property (nonatomic) BOOL shouldShowShareScreen;
@property (nonatomic) BOOL shouldShowSingleShareScreen;
@property (nonatomic) BOOL shouldShowGameDetail;
@property (nonatomic) BOOL shouldShowCamera;
@property (nonatomic) BOOL shouldShowKeyboard;
@property (nonatomic) BOOL shouldShowClearScreen;
@property (nonatomic) BOOL forbbidenStartByAudience;
@property (nonatomic) BOOL shouldShowExplainCard;
@property (nonatomic) BOOL supportedXplayGameAbility;
@property (nonatomic) BOOL needAdjustPanelLevel;
@property (nonatomic) BOOL hideUserEntrance;
@property (nonatomic) BOOL shouldShowFloatingView;
@property (copy, nonatomic) NSArray *supportLiveSceneList;
@property (nonatomic) BOOL isSupportAllLiveScene;
@property (copy, nonatomic) NSString *gameCategory;
@property (copy, nonatomic) NSString *stopReason;
@property (nonatomic) BOOL isXplay;

+ (id)anchorToAndienceInteractiveGameModelFromGameModel:(id)a0;

- (void).cxx_destruct;

@end
