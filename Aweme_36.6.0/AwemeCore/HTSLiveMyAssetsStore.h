@class NSString, HTSEventContext, NSArray;
@protocol IESLiveRoomService, IESLiveMyAssetsDelegate;

@interface HTSLiveMyAssetsStore : NSObject <HTSLiveMyAssetActions, HTSLiveMessageSubscriber>

@property (nonatomic) double timeInvtervalWithServer;
@property (retain, nonatomic) NSString *toolbarTip;
@property (nonatomic) BOOL assetGuideViewed;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL shouldShowReddot;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSArray *groupCountConfigs;
@property (weak, nonatomic) id<IESLiveMyAssetsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)preJudgePkcardWithCurrentAnchorRoomByLocal;
- (void)cleanLocalPkcardIdentifyWithCurrentAnchorRoom;
- (void)bindActions;
- (BOOL)convergedModule;
- (void)handleNoticeMessage:(id)a0;
- (void)myAssetListUpdated:(id)a0 at:(id)a1 updateMomentType:(long long)a2;
- (void)determineShouldShowReddot:(id)a0;
- (void)addLocalPkcardWithCurrentAnchorRoom;
- (BOOL)shouldShowAssetGuide;
- (void)onAssetGuideViewed;
- (BOOL)pr_isInMseqRoom;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (double)currentTimeStamp;
- (id)initWithRoom:(id)a0;

@end
