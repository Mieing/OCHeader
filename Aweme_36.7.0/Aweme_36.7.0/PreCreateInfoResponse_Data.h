@class ReachAreaComponent, CategoryComponent, BannerComponent, LiveTopicComponent, BottomToolBarComponent, AudienceLinkmicInfo, CreateModeComponent, TopAreaComponent, NSString, CustomerServiceComponent, HTSLiveImage, GPBInt32ObjectDictionary, CreateButtonComponent, CreatePageConfigPre;

@interface PreCreateInfoResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) long long coverAuditStatus;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long neverGoLiveFlag;
@property (retain, nonatomic) CreatePageConfigPre *createPageConfigPre;
@property (nonatomic) BOOL hasCreatePageConfigPre;
@property (nonatomic) long long newAnchorFlag;
@property (nonatomic) int liveGuideInterceptStrategy;
@property (retain, nonatomic) AudienceLinkmicInfo *audienceLinkmicInfo;
@property (nonatomic) BOOL hasAudienceLinkmicInfo;
@property (nonatomic) int lastLiveRoomMode;
@property (retain, nonatomic) GPBInt32ObjectDictionary *componentConfig;
@property (readonly, nonatomic) unsigned long long componentConfig_Count;
@property (retain, nonatomic) TopAreaComponent *topAreaComponent;
@property (nonatomic) BOOL hasTopAreaComponent;
@property (retain, nonatomic) ReachAreaComponent *reachAreaComponent;
@property (nonatomic) BOOL hasReachAreaComponent;
@property (retain, nonatomic) CreateButtonComponent *createButtonComponent;
@property (nonatomic) BOOL hasCreateButtonComponent;
@property (retain, nonatomic) CreateModeComponent *createModeComponent;
@property (nonatomic) BOOL hasCreateModeComponent;
@property (retain, nonatomic) BottomToolBarComponent *bottomToolbarComponent;
@property (nonatomic) BOOL hasBottomToolbarComponent;
@property (retain, nonatomic) CategoryComponent *categoryComponent;
@property (nonatomic) BOOL hasCategoryComponent;
@property (retain, nonatomic) CustomerServiceComponent *customerServiceComponent;
@property (nonatomic) BOOL hasCustomerServiceComponent;
@property (retain, nonatomic) BannerComponent *bannerComponent;
@property (nonatomic) BOOL hasBannerComponent;
@property (retain, nonatomic) LiveTopicComponent *liveTopicComponent;
@property (nonatomic) BOOL hasLiveTopicComponent;

+ (id)descriptor;

@end
