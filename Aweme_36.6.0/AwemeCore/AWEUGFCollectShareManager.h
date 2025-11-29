@class NSString, AWEUGFCoinShareTaskInfo, AWEAwemeModel, UIImage, AWEUGPendantEvadeControlService;

@interface AWEUGFCollectShareManager : NSObject <AWEUGPendantEvadeControlCustomProtocol, AWEUGFCollectShareManagerProtocol>

@property (nonatomic) BOOL hasColdLaunchRequest;
@property (nonatomic) unsigned long long taskStatus;
@property (retain, nonatomic) AWEUGFCoinShareTaskInfo *currentTaskModel;
@property (nonatomic) BOOL canShowWithEvade;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (nonatomic) long long currentViewCount;
@property (nonatomic) BOOL canShowWithScroll;
@property (nonatomic) BOOL inScrollProgress;
@property (nonatomic) BOOL requestingTaskDone;
@property (copy, nonatomic) NSString *currScene;
@property (retain, nonatomic) UIImage *cachePanelImage;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUGPendantEvadeControlService *evadeControlService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transferDictToModel:(id)a0;
+ (id)sharedInstance;

- (void)setupNotification;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)feedTableViewControllerWillPlayAweme:(id)a0;
- (BOOL)shouldEvadePendantWithAwemeModel:(id)a0;
- (void)updateWithFeedTableVC:(id)a0;
- (BOOL)needShowFCollectShareStyle;
- (id)getFCollectShareIMViewWithModel:(id)a0;
- (void)shareVideoSucceed;
- (id)getCurrentAwemeModel;
- (id)fcollectShareParams;
- (id)fcollectSharePanelGoldImage;
- (id)fcollectSharePanelText;
- (BOOL)canShowFCollectShareWithControl;
- (id)fcollectShareFeedGoldImage;
- (BOOL)needRegisterShareTask;
- (void)clickedFeedShareButton;
- (void)showFeedFCollectShareIcon;
- (void)setupResourceRootFolder:(id)a0;
- (void)downloadPNGWithURL:(id)a0 targetPath:(id)a1;
- (id)getPendantRootFolder;
- (BOOL)isPNGResourceExisted:(id)a0;
- (id)pngImagePath:(id)a0;
- (id)uriOfUrl:(id)a0;
- (id)pngImageName:(id)a0;
- (void)setupCurrScene;
- (void)setupPendantEvadeControlService;
- (void)dealGetTaskInfoData:(id)a0 error:(id)a1;
- (id)fcollectShareCapsuleText;
- (void)getTaskInfo;
- (id)loadPNGImageFromModel:(id)a0;
- (id)fcollectShareTaskGoldImage;
- (void)reportTaskDone;
- (id)getShareTaskInfoWith:(id)a0;
- (void)dealTaskModel:(id)a0 isColdLaunch:(BOOL)a1;
- (void)downloadImageWithUrl:(id)a0;
- (void)dealTaskDoneInfoData:(id)a0 error:(id)a1;
- (void)updateEvadeShouldShowFCollect:(BOOL)a0;
- (void)checkIfNeedNeedGetTaskInfo;
- (void).cxx_destruct;
- (id)init;

@end
