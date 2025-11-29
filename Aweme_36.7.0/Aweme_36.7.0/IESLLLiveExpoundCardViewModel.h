@class NSString, NSDictionary, IESLLLiveCardRawDataModel, IESLLLiveExpoundCardLynxModuleOperator, IESLLLiveExpoundCardSchemaHandler;

@interface IESLLLiveExpoundCardViewModel : NSObject

@property (nonatomic) long long countDownSeconds;
@property (retain, nonatomic) IESLLLiveExpoundCardSchemaHandler *schemaHandler;
@property (copy, nonatomic) NSString *actualShowPOIName;
@property (retain, nonatomic) IESLLLiveExpoundCardLynxModuleOperator *DSLDataLynxModule;
@property (nonatomic) double cardContentWidth;
@property (nonatomic) double cardContentHeight;
@property (nonatomic) unsigned long long cardPosition;
@property (copy, nonatomic) NSString *roomUniqueKey;
@property (copy, nonatomic) NSDictionary *originCardData;
@property (copy, nonatomic) NSDictionary *originControlData;
@property (readonly, nonatomic) IESLLLiveCardRawDataModel *model;
@property (copy, nonatomic) NSDictionary *gaiaXCardData;
@property (copy, nonatomic) id /* block */ isInSeckillStatus;
@property (copy, nonatomic) id /* block */ isWillSoldStatus;
@property (copy, nonatomic) id /* block */ isSoldOut;
@property (copy, nonatomic) id /* block */ isShowExclusivePrice;
@property (copy, nonatomic) id /* block */ closeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ buyBtnClickedBlock;
@property (copy, nonatomic) id /* block */ cardClickedBlock;

- (id)webviewSchemaString:(id)a0 joinParameters:(id)a1;
- (id)webviewUrlString:(id)a0 joinParameters:(id)a1;
- (void)updateCardModelLiveRoomInfo:(id)a0;
- (id)ironManParams;
- (id)getLiveInfo;
- (void)saveCurrentActualShowPOIName:(id)a0;
- (BOOL)isReadyGaiaXData;
- (void)updateCardModel:(id)a0 originCardData:(id)a1 originControlData:(id)a2;
- (void)fetchLiveServerTimeWithCallback:(id /* block */)a0;
- (BOOL)isUseLynxTracker;
- (void)sendCardDidAppearEventWithParams:(id)a0;
- (id)expoundCardEnterGoodsDetailSchema;
- (id)expoundCardEnterGoodsOrderSchemaWithLynxPassParams:(id)a0;
- (void)sendSeckillCardTrackerEvent;
- (unsigned long long)getFlashStatusTracker;
- (id)expoundCardEnterMemberShipSchemaWithLynxPassParams:(id)a0;
- (id)expoundCardEnterGoodsOrderOriginSchema;
- (BOOL)expoundCardEnterGoodsDetailSchemaIsPoiGoodsDetail;
- (id)expoundCardSessionParamsWithPosition:(id)a0;
- (id)expoundCardEnterGoodsDetailOriginSchema;
- (void)sendClickEventWithParams:(id)a0;
- (id)updateGaiaxDataForSpecialSence:(id)a0;
- (void)schemaHandlerisSeckillStatusBlockImplementation;
- (void)addGaiaXCardDataWithNeedClean:(BOOL)a0;
- (id)memberShipPageParamsWithOrderQuery:(id)a0;
- (void)addGaiaXClickEvent;
- (id)generateDSLOriginNativeData;
- (void)cleanLynxModuleIfNeeded;
- (id)initWithCardModel:(id)a0 originCardData:(id)a1 originControlData:(id)a2 cardPosition:(unsigned long long)a3 roomUniqueKey:(id)a4;
- (void).cxx_destruct;
- (id)moduleVersion;

@end
