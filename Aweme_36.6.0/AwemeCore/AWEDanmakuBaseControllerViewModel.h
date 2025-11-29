@class UIFont, NSString, AWEDanmakuPageContext, NSMutableSet, AWEVideoPlayDanmakuModel, NSMutableArray, AWEAwemeModel;
@protocol AWEDanmakuBaseControllerViewModelDelegate, AWEDanmakuDisplayDataModuleProtocol;

@interface AWEDanmakuBaseControllerViewModel : NSObject <AWEDanmakuBaseControllerViewModelProtocol>

@property (nonatomic) BOOL hasHandledMessageNotice;
@property (nonatomic) BOOL hasShownDeletedToast;
@property (retain, nonatomic) NSMutableSet *shownMessageDanmakuIds;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *pendingReplyFakeModelFromMessage;
@property (copy, nonatomic) NSString *parentDanmakuIdForPending;
@property (copy, nonatomic) NSString *hadRequestByIdsItemId;
@property (retain, nonatomic) NSMutableArray *cachedMessageDanmakuList;
@property (retain, nonatomic) UIFont *danmakuFont;
@property (retain, nonatomic) AWEDanmakuPageContext *context;
@property (weak, nonatomic) id<AWEDanmakuDisplayDataModuleProtocol> dataManagerModule;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEDanmakuBaseControllerViewModelDelegate> viewModelDelegate;
@property (nonatomic) long long sceneType;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setEvent;
- (void)refreshDanmakuUIWithFontChange;
- (void)addReplyDanmakuIfNeed;
- (BOOL)isLandScapeDanmaku;
- (id)generateDanmakusWithData:(id)a0;
- (void)handleDanmakuReplyNoticeWithDanmakuId:(id)a0 danmakuStatus:(long long)a1 parentDanmakuId:(id)a2 parentDanmakuStatus:(long long)a3 newData:(id)a4;
- (void)handleDanmakuDiggAndSendNoticeWithDanmakuId:(id)a0 danmakuStatus:(long long)a1 danmakuMessageType:(id)a2 newData:(id)a3;
- (void)showDeleteToastOnce:(id)a0;
- (BOOL)toppingSuccessWithDanmakuId:(id)a0 inDanmakus:(id *)a1;
- (void)getFakeDanmakuWithDanmakuIds:(id)a0 completion:(id /* block */)a1;
- (void)pendingReplyDanmaku:(id)a0 forParentDanmakuId:(id)a1;
- (id)initWithScene:(long long)a0 context:(id)a1;
- (void)handleDanmakuNoticeWithParams:(id)a0 withNewData:(id)a1;
- (void)handleWillDispatchDanmaku:(id)a0;
- (void)didDisplayDanmaku:(id)a0;
- (void)didDroppedDanmakus:(id)a0;
- (void)didDisplayDanmaku:(id)a0 inContainerView:(id)a1;
- (id)aAWEPlayInteractionAdapter;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateModel:(id)a0;

@end
