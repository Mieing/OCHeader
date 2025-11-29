@class NSString, HTSEventContext, HTSLiveFixedChatSyncData, HTSLiveFastChatSyncData, IESLivePublicScreenInfoModel;
@protocol IESLiveRoomService, IESLiveCommentEntryReactions;

@interface IESLiveCommentEntryStore : NSObject <IESLiveDataSyncDelegate, HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL disableComment;
@property (nonatomic) BOOL disableCommentByWrds;
@property (nonatomic) BOOL disableInputComment;
@property (copy, nonatomic) NSString *disableInputCommentHint;
@property (retain, nonatomic) HTSLiveFixedChatSyncData *fixedChatData;
@property (retain, nonatomic) HTSLiveFastChatSyncData *fastChatData;
@property (nonatomic) BOOL isDanmakuClosed;
@property (copy, nonatomic) NSString *inputHint;
@property (nonatomic) BOOL guideHintEnable;
@property (weak, nonatomic) id<IESLiveCommentEntryReactions> reactions;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) IESLivePublicScreenInfoModel *publicScreenInfoModel;
@property (copy, nonatomic) NSString *lowPcuGuideHint;
@property (nonatomic) unsigned long long guideHintStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (BOOL)convergedModule;
- (id)initWithRoomModel:(id)a0 diContext:(id)a1;
- (void)checkIfDisableComment;
- (void)checkIfDisableInputComment;
- (void)handleQuickCommentWithData:(id)a0;
- (void)handleQuickLimitCommentWithData:(id)a0;
- (void)setIsDanmakuClosedStatus:(BOOL)a0;
- (id)commentEntryTitle;
- (BOOL)commentEntryEmojiEnableShow;
- (BOOL)shouldShowLowPcuGuideHint;
- (id)titleLimitWithGuideHint;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
