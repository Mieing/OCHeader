@class NSString, NSArray;

@interface IntelligentMsgImgConfigurationMgr : MMUserService <IWeVisModelResExt, MMServiceProtocol> {
    NSArray *m_arrFigureClassificationLabelId;
    NSArray *m_arrFaceAlbumClassificationLabelId;
    BOOL m_isEnterBackground;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSimpleMsgFrom:(id)a0;
+ (id)getMsgFrom:(id)a0;
+ (id)getMsgFromFTSMsgItem:(id)a0;

- (id)init;
- (void)initData;
- (void)registerMethod;
- (void)removeNotificationObservers;
- (void)dealloc;
- (id)getArrFaceAlbumClassificationLabelId;
- (id)getArrFigureClassificationLabelId;
- (void)initIntelligentMsgData;
- (id)convertStringArrayToNumberArray:(id)a0;
- (id)getSearchBarPlaceholder;
- (BOOL)checkIntelligentMsgModelFileExit;
- (BOOL)isIntelligentMsgImgEffective;
- (BOOL)isIntelligentMsgImgSwitchOpen;
- (void)setIsIntelligentMsgImgTurnOn:(BOOL)a0;
- (void)asynModifyIntelligentMsgImgTurnOn:(BOOL)a0;
- (BOOL)isIntelligentMsgImgTurnOn;
- (BOOL)isIntelligentMsgImgSimilarWordAbtestSwitchOpen;
- (BOOL)isSupportIntelligentGPU;
- (BOOL)isIntelligentGPUAbtestSwitchOpen;
- (BOOL)isIntelligentOCRDataReportAbtestSwitchOpen;
- (BOOL)isIntelligentFaceClusterDataReportAbtestSwitchOpen;
- (BOOL)isSupportIntelligentNPU;
- (BOOL)isIntelligentNPUAbtestSwitchOpen;
- (BOOL)isSupportIntelligentSME;
- (BOOL)isIntelligentSMEAbtestSwitchOpen;
- (BOOL)isSupportIntelligentAMX;
- (BOOL)isIntelligentAMXAbtestSwitchOpen;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)reportIntelligentMsgEveryDay;
- (void)doReportIntelligentMsgEveryDay;
- (id)getIntelligentMsgEveryDayId;
- (void)onModelUpdate:(id)a0;
- (void)onModelListWillUpdate:(id)a0;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (BOOL)isEnterBackground;
- (void).cxx_destruct;

@end
