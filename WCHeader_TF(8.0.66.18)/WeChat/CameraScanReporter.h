@interface CameraScanReporter : NSObject

+ (void)reportIdKeyWithKey:(unsigned int)a0 value:(unsigned int)a1;
+ (void)report1259IdKeyWithKey:(unsigned int)a0 value:(unsigned int)a1;
+ (void)reportScanPageExposureType:(long long)a0 enterSessionID:(unsigned int)a1 currentTab:(long long)a2 enterTimeStampInMS:(unsigned long long)a3 exitTimeStampInMS:(unsigned long long)a4 enterScene:(unsigned long long)a5 businessID:(id)a6 businessInfo:(id)a7;
+ (void)reportSwitchToTab:(long long)a0 tabAction:(long long)a1 tabSessionID:(unsigned int)a2 uiSessionID:(unsigned int)a3;
+ (void)reportScanMultiCodesMarkDotInfoList:(id)a0 resultOpType:(unsigned int)a1 selectedIndex:(long long)a2 tabSessionID:(unsigned int)a3 scanSessionID:(unsigned int)a4 clientDetectCostTime:(unsigned long long)a5 reportScene:(long long)a6 isCombine:(BOOL)a7 uiSessionID:(unsigned int)a8;
+ (void)reportScanMultiCodesMarkDotInfoList:(id)a0 resultOpType:(unsigned int)a1 selectedIndex:(long long)a2 tabSessionID:(unsigned int)a3 scanSessionID:(unsigned int)a4 clientDetectCostTime:(unsigned long long)a5 reportScene:(long long)a6 isCombine:(BOOL)a7 uiSessionID:(unsigned int)a8 expoFrom:(unsigned long long)a9 maskExitType:(unsigned int)a10;
+ (void)reportSingleCodeShowResultOrMultiCodeViewShowSessionid:(unsigned long long)a0 allIconNum:(unsigned long long)a1 recIconNum:(unsigned long long)a2 scene:(unsigned long long)a3;
+ (void)reportScanGoodsResult:(long long)a0 resultAction:(long long)a1 enterSessionID:(unsigned int)a2 tabSessionID:(unsigned int)a3 scanSessionID:(unsigned int)a4 businessType:(long long)a5 businessSubType:(long long)a6 businessID:(id)a7 businessInfo:(id)a8;
+ (void)reportScanGoodsTimeConsuming:(long long)a0 resultType:(long long)a1 startTimeStamp:(unsigned long long)a2 stopTimeStamp:(unsigned long long)a3 tabSessionID:(unsigned int)a4 scanSessionID:(unsigned int)a5;
+ (void)reportScanGoodsAIEngineInfo:(id)a0 resultAction:(long long)a1 tabSessionID:(unsigned int)a2 scanSessionID:(unsigned int)a3;
+ (void)reportCameraPageEvent:(long long)a0 scanType:(long long)a1 tabSessionID:(unsigned int)a2 uiSessionID:(unsigned int)a3;
+ (void)reportCloseGoodScanResultPage:(long long)a0 enterTimeStampInMS:(unsigned long long)a1 closeTimeStampInMS:(unsigned long long)a2 enterSessionID:(unsigned int)a3 tabSessionID:(unsigned int)a4 scanSessionID:(unsigned int)a5 businessType:(long long)a6 businessSubType:(long long)a7 businessID:(id)a8 businessInfo:(id)a9;
+ (void)reportGoodScanResultPageOpType:(unsigned long long)a0 enterSessionID:(unsigned int)a1 tabSessionID:(unsigned int)a2 scanSessionID:(unsigned int)a3;
+ (void)reportScanCodeJumpDotViewClick:(long long)a0 codeSubType:(unsigned int)a1 picFrom:(long long)a2 resultId:(unsigned int)a3 entranceStartMs:(unsigned long long)a4 tabSessionID:(unsigned int)a5 enterSessionID:(unsigned int)a6 scanEntrance:(unsigned int)a7;
+ (void)reportScanGoodsBubbleViewClick:(long long)a0 resultId:(unsigned int)a1 entranceStartMs:(unsigned long long)a2 tabSessionID:(unsigned int)a3 enterSessionID:(unsigned int)a4 scanEntrance:(unsigned int)a5 goodsType:(unsigned int)a6 retCode:(unsigned int)a7;
+ (void)reportScanPageScanTabPageOut:(long long)a0 entranceStartMs:(unsigned long long)a1 tabSessionID:(unsigned int)a2 enterSessionID:(unsigned int)a3 scanEntrance:(unsigned int)a4;
+ (void)reportScanCodeKVIdentify:(long long)a0 picFrom:(long long)a1 resultId:(unsigned int)a2 entranceStartMs:(unsigned long long)a3 tabSessionID:(unsigned int)a4 enterSessionID:(unsigned int)a5 scanEntrance:(unsigned int)a6;
+ (void)reportScanGoodsKVIdentify:(long long)a0 resultId:(unsigned int)a1 entranceStartMs:(unsigned long long)a2 tabSessionID:(unsigned int)a3 enterSessionID:(unsigned int)a4 scanEntrance:(unsigned int)a5 goodsType:(unsigned int)a6;
+ (void)reportScanGoodsSvrIdentify:(long long)a0 resultId:(unsigned int)a1 entranceStartMs:(unsigned long long)a2 tabSessionID:(unsigned int)a3 enterSessionID:(unsigned int)a4 scanEntrance:(unsigned int)a5 goodsType:(unsigned int)a6;

@end
