@class IESLivePublicScreenView, IESLivePublicScreenDiggApi, NSString, HTSEventContext, NSMutableDictionary, GPBInt64ObjectDictionary, NSMutableArray, IESLivePublicScreenContext;

@interface IESLivePublicScreenDiggAttachment : NSObject <IESLivePublicScreenDiggService, HTSLiveMessageSubscriber, IESLivePSCommonAttachmentProtocol>

@property (retain, nonatomic) NSMutableDictionary *likeInfoBuffer;
@property (retain, nonatomic) NSMutableArray *recentMsgIdList;
@property (retain, nonatomic) GPBInt64ObjectDictionary *totalMsgData;
@property (nonatomic) BOOL firstChatLikeMessage;
@property (retain, nonatomic) NSMutableArray *historyMsgIds;
@property (retain, nonatomic) IESLivePublicScreenDiggApi *api;
@property (nonatomic) BOOL isDislike;
@property (nonatomic) long long othersLikeShowCount;
@property (nonatomic) long long othersMessageLikeShowCount;
@property (nonatomic) BOOL enableFixCrash;
@property (nonatomic) double dislikeTapTimeS;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) double diggTapTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLivePublicScreenView *publicScreenView;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;

- (BOOL)shouldActive;
- (void)updateDiggInfoWithNodes:(id)a0;
- (void)updateDiggInfoWithMsgIds:(id)a0;
- (id)abilityProtocol;
- (void)tapDiggItemWithNode:(id)a0 item:(id)a1;
- (id)getStatusForMsgId:(long long)a0;
- (void)updateItem:(id)a0 withStatus:(id)a1 sendByCurrentUser:(BOOL)a2;
- (BOOL)storeStatus:(id)a0 msgId:(long long)a1;
- (BOOL)expiredStatus:(id)a0 msgId:(long long)a1;
- (BOOL)enableDisplayDiggItemWithMessage:(id)a0;
- (void)tapDislikeItemWithNode:(id)a0;
- (void)handleChatLikeMessage:(id)a0;
- (void)handleRealTimeChatLikeMessage:(id)a0;
- (void)addDiggPSFloatSheetItem;
- (void)addDislikePSFloatSheetItem;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (void)messageReceived:(id)a0;

@end
