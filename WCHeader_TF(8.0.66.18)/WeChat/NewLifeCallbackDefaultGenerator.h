@class NSString, NSMutableSet;

@interface NewLifeCallbackDefaultGenerator : NewLifeCallbackGenerator <WCFinderDataItemExt, WCFinderPostDataItemExt, NewLifeManagerExt, NewLifeSyncStatusExt, WCFinderRedDotExt, NewLifeCdnUploadExt>

@property (retain, nonatomic) NSMutableSet *observerRedDotTipsPaths;
@property (retain, nonatomic) NSMutableSet *updatedRedDotTipsPaths;
@property (retain, nonatomic) NSString *command;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerListenerForCommand:(id)a0 keyList:(id)a1 userInfo:(id)a2;
- (void)onSendFlowDataToFlutter:(id)a0;
- (void)onSendSwitchTabEventToFlutter:(BOOL)a0;
- (void)onMentionActionCallbackToFlutter:(id)a0;
- (void)onSelectMusicCallbackToFlutter:(id)a0;
- (void)onFinderDataItem:(id)a0 updateFavStateByExtention:(BOOL)a1;
- (void)onFinderDataItemIsLikedUpdateByExtention:(id)a0;
- (void)onFeedStatusChangeForFeedId:(unsigned long long)a0 source:(unsigned int)a1 components:(unsigned int)a2 monotonicData:(id)a3;
- (void)onFollowStatusChangeForFinderUsername:(id)a0 isFollow:(BOOL)a1;
- (void)onJumpInfoStatusChangeForFeedId:(id)a0 scene:(unsigned int)a1 jumpInfos:(id)a2;
- (void)onFinderDataItemPostProgressWithTid:(id)a0 progress:(id)a1;
- (void)generatePostStateChangeCallback:(id)a0;
- (void)onFinderDataItemDelete:(id)a0;
- (void)onNewLifePostSessionStartCompress:(id)a0;
- (void)onNewLifePostSessionStartUpload:(id)a0;
- (void)onNewLifePostSessionUpLoadSuccessful:(id)a0;
- (void)onNewLifePostSessionUpLoadFailWithTid:(id)a0 errorType:(long long)a1;
- (void)finderRedDotDataChangedWithPathKey:(id)a0;
- (void)onSendNewLifeStreamNotifyEventToFlutter;
- (void)onSetEnvelopeUrlCallbackToFlutter:(id)a0;
- (void)onSelectLinkCallbackToFlutter:(id)a0;
- (void)onNewBrandContact:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onHandleAddContactNotify:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void)onGetCreatorCenterInfoCallbackToFlutter:(id)a0;
- (void)onCdnUploadProgressCallback:(id)a0;
- (void)onCdnUploadEndCallback:(id)a0;
- (void)onLiveTask:(id)a0 liveClosed:(BOOL)a1;
- (void).cxx_destruct;

@end
