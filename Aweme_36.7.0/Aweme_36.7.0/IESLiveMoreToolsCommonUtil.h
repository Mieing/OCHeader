@class IESLiveFrequencyController, HTSEventContext, NSString, IESLiveAudienceMoreToolsApi, NSNumber;
@protocol IESLiveMoreToolsCommonUtilDelegate;

@interface IESLiveMoreToolsCommonUtil : HTSLiveApi <HTSLiveRoomRemoteActions, HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveFrequencyController *frequencyController;
@property (retain, nonatomic) IESLiveAudienceMoreToolsApi *api;
@property (nonatomic) BOOL isRequestingTempStateAreaData;
@property (nonatomic) BOOL cornerMarkShowing;
@property (weak, nonatomic) id<IESLiveMoreToolsCommonUtilDelegate> delegate;
@property (retain, nonatomic) NSNumber *roomId;
@property (nonatomic) BOOL isUsingInLandscape;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)toastWithText:(id)a0;
- (void)requestCollectGame:(id)a0 fromType:(id)a1 liveScene:(id)a2 anchorID:(id)a3 callback:(id /* block */)a4;
- (void)moreToolsReceiveDidEnterRoom:(id)a0;
- (void)triggerTempStateAreaRequest;
- (void)triggerTempStateAreaCollectList;
- (void)addReachBadgeIconToToolBarWithDuration:(long long)a0;
- (void)removeReachBadgeIconToToolBar;
- (void)dispatchModel:(id)a0;
- (void)requestTempStateAreaDataCallBack:(id /* block */)a0;
- (void)dispatchCollectModel:(id)a0;
- (void)logAudiencePlayTogetherEntrance:(id)a0 andError:(id)a1;
- (void)loadWebImageWithURL:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
