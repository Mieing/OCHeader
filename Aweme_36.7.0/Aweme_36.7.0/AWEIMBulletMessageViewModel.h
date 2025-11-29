@class NSString, IESIMBulletContainerPreLayoutInfo;

@interface AWEIMBulletMessageViewModel : AWEIMMessageViewModel <IESIMBulletContainerPreLayoutInfoDelegate, AWEIMLiveTypeMessageViewModelProtocol, IESIMBulletContainerPreloadItemProtocol>

@property (copy, nonatomic) NSString *reuseIdentifier;
@property (copy, nonatomic) id /* block */ isPlayStatusChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long playStatus;
@property (nonatomic) double displayTime;
@property (nonatomic) long long preLayoutStatus;
@property (nonatomic) long long fullLoadStatus;
@property (retain, nonatomic) IESIMBulletContainerPreLayoutInfo *preLayoutInfo;
@property (nonatomic) BOOL needSkipPreload;

- (long long)preloadStrategyWithScene:(long long)a0;
- (id)dynamicPatchForPreload;
- (id)bulletContextForPreload;
- (void)willDisplayByMessageVisibleLifeCycle;
- (void)didEndDisplayingByMessageVisibleLifeCycle;
- (void)setupWithMessage:(id)a0;
- (void)preLayoutInfoDidReset;
- (id)__processClientData;
- (id)__findBulletSyncPropertyItemInPropertyGroups:(id)a0;
- (id)updateBulletSyncPropertyItemInPropertyGroups;
- (id)__constructRawDataStorage:(id)a0;
- (id)__identifierInfoWithClientData:(id)a0;
- (id)__messageIdentifier;
- (BOOL)__canPreLayoutBulletCard;
- (BOOL)__canPreloadBulletCard;
- (id)generateBulletContext;
- (BOOL)__bulletViewAlreadyInReusePool;
- (BOOL)isLiveCardMsgViewModel;
- (void).cxx_destruct;
- (double)estimatedHeight;

@end
