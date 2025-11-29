@class HTSEventContext, HTSLiveSubscribeInfoResponse_Data, NSString, IESLiveSubscribeEmojiView, IESLiveSubscribeVIPApi, IESLiveSubscribeEmojiViewModel, IESLiveGCDTimer, NSMutableArray, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveSubscribeVIPStore : NSObject <HTSLiveMessageSubscriber, IESLiveMessageInteractionModuleCommentAction, IESLiveSubscribeVIPRouter>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL roomDataReady;
@property (retain, nonatomic) IESLiveSubscribeVIPApi *subscribeVIPApi;
@property (retain, nonatomic) HTSLiveSubscribeInfoResponse_Data *subscribeInfo;
@property (retain, nonatomic) IESLiveGCDTimer *reportTimer;
@property (nonatomic) long long reportTimeIndex;
@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) NSMutableArray *updateBlocks;
@property (weak, nonatomic) IESLiveSubscribeEmojiView *emojiView;
@property (retain, nonatomic) IESLiveSubscribeEmojiViewModel *emojiViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)didSetAttachingDIContext;
- (void)remoteRoomDataReady:(id)a0;
- (BOOL)shouldShowSubscribeVIPTab;
- (id)fansclubSubscribeURL;
- (void)commentEmoticonPanelDidShow;
- (void)showSubscribeVIPPanelWithSourceType:(long long)a0;
- (void)inputtedCommentDidShowAssociationResults:(id)a0;
- (id)subscribeVIPInfo;
- (void)updateSubscribeVIPInfoWithType:(long long)a0 completion:(id /* block */)a1;
- (BOOL)shouldShowSubscribeVIPEntrance;
- (BOOL)isMember;
- (void)registerSubscribeVIPInfoUpdateBlock:(id /* block */)a0;
- (long long)topLeftEntranceLastPanelTab;
- (void)bindEmoticonViewModelForCell:(id)a0 isLandscape:(BOOL)a1 slideOffset:(double)a2 newStyle:(BOOL)a3 trackInfo:(id)a4;
- (id)emoticonTabEntranceItem;
- (id)emoticonTabViewItem;
- (void)emoticonViewDidShowFromDraw:(BOOL)a0 trackParams:(id)a1;
- (void)emoticon:(long long)a0 didSendWith:(id)a1;
- (void)cleanSubscribeEmojiTip;
- (BOOL)shouldShowAndUpdateSubscribeEmojiTipIfNeeded;
- (id)buildCommentEmoticonPageItem;
- (void)bindService;
- (id)initWithRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void)tapCommentGuideButton;
- (void)p_updateSubscribeVIPInfoWithType:(long long)a0;
- (void)p_reportAudienceVipRechargeData;
- (void)p_tryInvalidateReportTimer;
- (BOOL)isPaidSubscribeRoom;
- (void)p_reportVipRechargeStrategy:(long long)a0;
- (BOOL)p_enableSubscribeVIP;
- (unsigned long long)p_fansGroupSrouceTypeFromVIPSourceType:(long long)a0;
- (void)updateTitleAndImageUrlForEmoticonPageItem:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (int)memberType;

@end
