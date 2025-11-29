@class HTSEventContext, NSMutableDictionary, NSDictionary, NSString, IESLiveGiftAIClientHandlerMessage, NSArray;
@protocol IESLiveRoomService, IESLiveGiftAiService;

@interface IESLiveGiftAlClientStrategyCenter : NSObject <IESLiveSEIListener, IESLiveGiftModuleStickerAudienceInterface>

@property (retain, nonatomic) IESLiveGiftAIClientHandlerMessage *handlerMessage;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long consumeLevel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL enableOpenSEI;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) id<IESLiveGiftAiService> aiService;
@property (nonatomic) long long seiReceiverFrequencyTime;
@property (nonatomic) double lastSEIInfoReceive;
@property (retain, nonatomic) NSMutableDictionary *giftNameToIdMap;
@property (copy, nonatomic) NSDictionary *stickerMatchGiftConfig;
@property (copy, nonatomic) NSString *stickerScene;
@property (copy, nonatomic) NSString *stickerTextCache;
@property (copy, nonatomic) NSArray *stickerMatchGiftIdsCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (id)resortGiftsInfoMap;
- (void)updateAudienceStickerWithText:(id)a0;
- (void)removeAudienceTextSticker;
- (id)originAIInfo;
- (void)registerGiftResortMessageHandler;
- (id)getInteractiveSceneContext;
- (void)handleResortResultGiftAndSceneWithMessage:(id)a0;
- (void)runTaskWithParams:(id)a0 sceneFormatter:(id)a1;
- (void)runTaskWithStickerTextContent;
- (id)findGiftId:(id)a0;
- (id)initWithRoom:(id)a0 context:(id)a1 isAnchor:(BOOL)a2;
- (void)runTaskWithGiftListAsyncChange;
- (void)removeGiftRankMessageHandle;
- (void).cxx_destruct;
- (void)setup;

@end
