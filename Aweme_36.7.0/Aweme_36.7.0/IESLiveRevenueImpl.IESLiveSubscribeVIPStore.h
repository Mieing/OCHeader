@class HTSLiveSubscribeInfoResponse_Data;

@interface IESLiveRevenueImpl.IESLiveSubscribeVIPStore : NSObject <IESLiveSubscribeVIPRouter, HTSLiveMessageSubscriber, IESLiveMessageInteractionModuleCommentAction> {
    void /* unknown type, empty encoding */ room;
    void /* unknown type, empty encoding */ trackContext;
    void /* unknown type, empty encoding */ componentContext;
    void /* unknown type, empty encoding */ roomDataReady;
    void /* unknown type, empty encoding */ subscribeVIPApi;
    void /* unknown type, empty encoding */ _subscribeInfo;
    void /* unknown type, empty encoding */ reportTimer;
    void /* unknown type, empty encoding */ reportTimeIndex;
    void /* unknown type, empty encoding */ completions;
    void /* unknown type, empty encoding */ updateBlocks;
    void /* unknown type, empty encoding */ emojiView;
    void /* unknown type, empty encoding */ emojiViewModel;
}

@property (nonatomic, retain) HTSLiveSubscribeInfoResponse_Data *subscribeInfo;

- (void)didSetAttachingDIContext;
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
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;
- (int)memberType;

@end
