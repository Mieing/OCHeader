@class HTSEventContext, IESLiveThreadSafeDictionary, NSString;
@protocol IESLiveRoomService, IESLiveUserService;

@interface IESLiveGiftEffectCommunicationStore : NSObject <IESLiveEffectMessageSubscriber, HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *effectKeyToGiftIDSetMap;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *giftIDToEffectKeySetMap;
@property (nonatomic) long long messageIndex;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *giftCurrentMaxSendCountMap;
@property (nonatomic) BOOL communicationEnable;
@property (nonatomic) long long enterRoomDelaySendMessageDuration;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)didReceiveEffectMessage:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 data:(id)a3;
- (void)onEffectGiftNotifyMessageReceivedWithArg1:(unsigned long long)a0 arg2:(unsigned long long)a1 data:(id)a2;
- (id)initWithRoom:(id)a0 TrackContext:(id)a1 componentContext:(id)a2;
- (void)onEffectLiveInteractionMessageReceivedWithArg1:(unsigned long long)a0 arg2:(unsigned long long)a1 data:(id)a2;
- (id)uniqueComboKeyWithGiftMessage:(id)a0 gift:(id)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
