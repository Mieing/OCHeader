@class NSArray, NSTimer, NSMutableSet, AWECampaignNoticeInfo, UIImage, NSString;

@interface AWEIMCampaignManager : NSObject <AWEIMCampaignManagerProtocol>

@property (retain, nonatomic) AWECampaignNoticeInfo *campaignInfo;
@property (nonatomic) BOOL currentFromMulti;
@property (copy, nonatomic) NSArray *availableList;
@property (copy, nonatomic) NSArray *availableMultiList;
@property (weak, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL titleImageChanged;
@property (retain, nonatomic) NSMutableSet *finishGuideList;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *titleImage;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) BOOL presentedCampaignGuide;
@property (nonatomic) BOOL campaignHeaderShowing;
@property (readonly, copy, nonatomic) NSString *multiSchema;
@property (copy, nonatomic) NSString *activityID;
@property (nonatomic) BOOL hasChangedTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (BOOL)enablePresentCampaignView;
- (BOOL)enablePresentCampaignViewWithoutShowTime;
- (void)finishSyncTitleImage;
- (void)customNavigationHasShowAnimation;
- (BOOL)canShowCustomNavigation;
- (BOOL)isMultiSchemaWebRouter;
- (void)updateNoticeCampaign:(id)a0 multiCampaignInfoList:(id)a1;
- (void)timeFired:(id)a0;
- (id)keyForCampaignID;
- (id)customNavigaionPresentKey;
- (void)trackNoticeEntranceLoadError:(id)a0 extra:(id)a1;
- (void)trackNoticeEntrance;
- (void)updateCampaignResouce;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;
- (id)currentDate;
- (void)dealloc;

@end
