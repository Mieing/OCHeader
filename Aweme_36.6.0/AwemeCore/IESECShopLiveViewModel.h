@class NSString, NSArray, IESECShopLiveInfoModel, IESECStorePageContext;
@protocol IESECLiveCardModuleInterfaceV2, IESECLiveCardModuleInterface, IESECLiveCardViewOuterDelegate, IESECLiveCardContainerDelegate;

@interface IESECShopLiveViewModel : NSObject <IESECMessageSubscriber>

@property (retain, nonatomic) IESECShopLiveInfoModel *liveInfoModel;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (weak, nonatomic) id<IESECLiveCardContainerDelegate> containerDelegate;
@property (weak, nonatomic) id<IESECLiveCardViewOuterDelegate> cardViewDelegate;
@property (readonly, copy, nonatomic) NSString *liveTitle;
@property (readonly, copy, nonatomic) NSString *streamData;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, copy, nonatomic) NSString *anchorID;
@property (readonly, copy, nonatomic) NSString *roomUrl;
@property (readonly, nonatomic) BOOL hasLiveTab;
@property (readonly, copy, nonatomic) NSArray *liveCoverUrlList;
@property (retain, nonatomic) id<IESECLiveCardModuleInterface> cardModule;
@property (retain, nonatomic) id<IESECLiveCardModuleInterfaceV2> cardModuleV2;
@property (nonatomic, getter=isLiveRoomTransferring) BOOL liveRoomTransferring;
@property (nonatomic) BOOL shouldTransferToLiveRoomLeaveFinger;
@property (retain, nonatomic) NSString *btmId;
@property (nonatomic) BOOL hasShowLiveTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)anchorId;
- (id)popupUrl;
- (id)initWithPageContext:(id)a0;
- (void)subscribeLiveCardMessages;
- (void)unsubscribeLiveCardMessages;
- (void)updateLiveInfoModel:(id)a0;
- (void)fetchCardIfNeededOnEnter:(BOOL)a0;
- (void)trackLivesdkLiveShow;
- (void)trackLivesdkLiveTipsClick:(id)a0;
- (void)trackStoreHeadLiveFade:(id)a0;
- (id)ecomLiveParamsOnEnterLive;
- (void)trackLivesdkLivecellClick:(unsigned long long)a0;
- (void)trackLivesdkOpenAudio;
- (void)updateLiveInfoModel:(id)a0 insertBlk:(id /* block */)a1;
- (void)updateLiveCardModule;
- (void)p_updateCardModuleWithContainerDelegate:(id)a0 cardViewDelegate:(id)a1;
- (id)liveCardTrackParams;
- (id)p_passThroughLogDataDict;
- (id)shortRoomUrl;
- (id)ecomLiveParamsJSONStrOnPreLive;
- (id)liveGiftMetaInfoDict;
- (void)trackLivesdkLiveTipsShow;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
