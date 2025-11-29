@class HTSEventContext, NSString, IESLiveSubscribeVIPEmoticonTabEntranceItem, NSMutableDictionary, NSDictionary, HTSLiveEmojiTabInfo, NSMutableArray, IESLiveSubscribeVIPEmoticonTabViewItem, NSNumber;
@protocol IESLiveRoomService;

@interface IESLiveSubscribeEmojiViewModel : NSObject <IESLiveMessageInteractionModuleCommentAction>

@property (nonatomic) long long emojiStatus;
@property (retain, nonatomic) NSMutableArray *subscribeEmojiList;
@property (retain, nonatomic) HTSLiveEmojiTabInfo *subscribeEmojiTabInfo;
@property (retain, nonatomic) NSNumber *danmakuSwitchON;
@property (retain, nonatomic) NSNumber *shouldUpdateEmojiView;
@property (nonatomic) long long expireDate;
@property (nonatomic) int memberType;
@property (copy, nonatomic) NSString *guideSchema;
@property (retain, nonatomic) NSMutableDictionary *isNewSubscribeEmojiDic;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSDictionary *extraTrackInfo;
@property (nonatomic) BOOL newStyle;
@property (retain, nonatomic) IESLiveSubscribeVIPEmoticonTabViewItem *tabViewItem;
@property (retain, nonatomic) IESLiveSubscribeVIPEmoticonTabEntranceItem *tabEntranceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)commentDanmakuSwitchDidChange:(BOOL)a0;
- (void)commentEmoticonPanelDidShow;
- (void)subscribeEmoticonDidSend:(long long)a0 error:(id)a1 duration:(double)a2 commentEnterSource:(long long)a3;
- (void)emoticonViewDidShowFromDraw:(BOOL)a0 trackParams:(id)a1;
- (void)cleanSubscribeEmojiTip;
- (BOOL)shouldShowAndUpdateSubscribeEmojiTipIfNeeded;
- (id)buildCommonTrackInfo;
- (BOOL)isNewEmojiWithEmojiID:(long long)a0;
- (BOOL)canSendSubscribeEmoji:(id)a0;
- (void)trackSubscribeEmojiSendWithEmoji:(id)a0;
- (void)selectSubscribeEmojiAtIndex:(long long)a0;
- (void)tapSubscribeGuideButton;
- (void)updateIsNewSubscribeEmojiDicWith:(id)a0;
- (BOOL)shouldShowSubscribeEmojiTapDot;
- (void)trackSubscribeGuideButton;
- (void)tapCommentGuideButton;
- (void)cleanSubscribeEmojiTabTip;
- (void)updateLocalShowNewSubscribeEmojiTabDotDate;
- (void)updateLocalSubscribeEmoji;
- (void)trackSubscribeEmojiTabClick;
- (void)trackSubscribeEmojiPanelShowWithDraw:(BOOL)a0 trackParams:(id)a1;
- (void)trackSubscribeEmojiTabShow;
- (void)monitor_sendSubscribeEmojiWithEmojiID:(long long)a0 duration:(double)a1 error:(id)a2;
- (BOOL)shouldShowNewSubscribeEmojiTabDot;
- (BOOL)hasNewSubscribeEmoji;
- (id)subscribeVIPStatus;
- (BOOL)shouldShowSubscribeEmojiTabTip;
- (void)updateSubscribeInfo:(id)a0;
- (void)trackSubscribeEmojiSendWithEmoji:(long long)a0 messageSource:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
