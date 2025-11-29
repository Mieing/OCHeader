@class UINavigationController, NSString, MMUIViewController, StoreEmotionGetEmotionListCgi, StoreEmotionAllListReportInfo, EmotionBannerSet;

@interface StoreEmoticonTopicProxyLogic : NSObject <StoreEmotionGetEmotionListCgiDelegate>

@property (retain, nonatomic) StoreEmotionGetEmotionListCgi *getEmotionListCgi;
@property (retain, nonatomic) EmotionBannerSet *bannerSet;
@property (nonatomic) int extranceScene;
@property (weak, nonatomic) MMUIViewController *fromVC;
@property (weak, nonatomic) UINavigationController *navController;
@property (nonatomic) unsigned long long sessionId;
@property (retain, nonatomic) StoreEmotionAllListReportInfo *reportInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)openTopicVC;
- (id)getTopicVC;
- (id)getTopicViewController;
- (id)getAllListViewController;
- (BOOL)localCheckCapacity;
- (void)remoteCheckCapacity;
- (BOOL)openWithVC:(id)a0;
- (id)getNavigationController;
- (BOOL)openUpdateTip;
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)a0 Response:(id)a1;
- (void).cxx_destruct;

@end
