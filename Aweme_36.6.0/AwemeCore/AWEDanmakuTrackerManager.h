@class NSString;

@interface AWEDanmakuTrackerManager : NSObject <AWEDanmakuTrackManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackDanmakuSwitchChange:(id)a0 isLandScape:(BOOL)a1 enterFrom:(id)a2 enterMethod:(id)a3 isON:(BOOL)a4 logExtraDict:(id)a5;
+ (void)trackDanmakuSwitchChange:(id)a0 isLandScape:(BOOL)a1 enterFrom:(id)a2 enterMethod:(id)a3 isON:(BOOL)a4;
+ (void)monitorDanmakuResourceWithURI:(id)a0 success:(BOOL)a1;
+ (void)trackAdDanmakuEvent:(id)a0 danmakuModel:(id)a1 labelStr:(id)a2 extraParams:(id)a3;
+ (id)getRequestLogID:(id)a0;
+ (void)trackDanmakuSettingWithSceneType:(long long)a0;
+ (void)trackDanmakuMonitor:(id)a0 eventName:(id)a1 enterFrom:(id)a2 error:(id)a3 logID:(id)a4;
+ (void)trackDanmakuEvent:(id)a0 danmakuModel:(id)a1 awemeModel:(id)a2 isLandScape:(BOOL)a3 enterFrom:(id)a4 extParamsDic:(id)a5;
+ (void)trackDanmakuExposedLikeDanmakuShow:(id)a0 model:(id)a1 isLandScape:(BOOL)a2 enterFrom:(id)a3 extParamsDic:(id)a4;
+ (void)trackFirstDanmakuShowWithModel:(id)a0 danmakuDescriptor:(id)a1 playTime:(double)a2 playPercent:(double)a3 enterFrom:(id)a4 isLandScape:(BOOL)a5;
+ (void)trackOfficialDanmakuShow:(BOOL)a0 enterFrom:(id)a1 model:(id)a2 danmakuModel:(id)a3 extraParams:(id)a4;
+ (void)trackDanmakuImpressionWithModel:(id)a0 enterFrom:(id)a1 danmakuIDList:(id)a2 videoTimeList:(id)a3 isLandScape:(BOOL)a4;
+ (void)trackDanmakuPlayResult:(id)a0 enterFrom:(id)a1 isLandScape:(BOOL)a2 extraParams:(id)a3;
+ (void)trackDanmakuNetworkService:(id)a0 awemeModel:(id)a1 enterFrom:(id)a2 error:(id)a3 logID:(id)a4;
+ (long long)checkAdType:(id)a0;
+ (void)trackDanmakuWatchLaterAddShowWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (void)trackDanmakuPubDone:(id)a0 enterFrom:(id)a1 danmakuModel:(id)a2 isLandScape:(BOOL)a3 extraParams:(id)a4;
+ (void)trackDanmakuClick:(id)a0 awemeModel:(id)a1 isLandScape:(BOOL)a2 enterFrom:(id)a3 acctountType:(id)a4 extParamsDic:(id)a5;
+ (void)trackEnterDanmakuListWithModel:(id)a0 isLandScape:(BOOL)a1 enterFrom:(id)a2 extParamsDic:(id)a3;
+ (void)trackEnterDanmakShieldPanel:(id)a0 isLandScape:(BOOL)a1 enterFrom:(id)a2 enterMethod:(id)a3 extParamsDic:(id)a4;
+ (void)trackDanmakuDig:(id)a0 awemeModel:(id)a1 isLandScape:(BOOL)a2 enterFrom:(id)a3 acctountType:(id)a4 extParamsDic:(id)a5;
+ (void)trackDislikeDanmakuWithModel:(id)a0 danmakuModel:(id)a1 isLandScape:(BOOL)a2 enterFrom:(id)a3 enterMethod:(id)a4 extParamsDic:(id)a5;
+ (void)trackCancelDislikeDanmakuWithModel:(id)a0 danmakuModel:(id)a1 isLandScape:(BOOL)a2 enterFrom:(id)a3 enterMethod:(id)a4 extParamsDic:(id)a5;
+ (void)trackDanmakuDeleteSuccess:(id)a0 enterFrom:(id)a1 danmakuModel:(id)a2 isLandScape:(BOOL)a3 accountType:(id)a4 extParamsDic:(id)a5;
+ (void)trackDanmakuReportSuccess:(id)a0 model:(id)a1 enterFrom:(id)a2 isLandScape:(BOOL)a3 accountType:(id)a4 extParamsDic:(id)a5;
+ (void)trackDanmakuGlobalVideoCloseSwitch:(id)a0 logExtraDict:(id)a1;
+ (void)trackDanmakuPopover:(id)a0 danmakuModel:(id)a1 awemeModel:(id)a2 extParamsDic:(id)a3;
+ (void)trackDanmakuClickCopy:(id)a0 awemeModel:(id)a1 isLandScape:(BOOL)a2 enterFrom:(id)a3 extParamsDic:(id)a4;
+ (void)trackEnterDanmakuSettingPanelWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 isLandScape:(BOOL)a3 logExtraDict:(id)a4;
+ (void)trackEnterDanmakuMorePanel:(id)a0;
+ (void)trackDanmakuScrollPanelDuration:(id)a0 groupID:(id)a1 exitMethod:(id)a2 duration:(id)a3;
+ (id)getLongVideoTrackParamsWithModel:(id)a0;
+ (void)trackDanmakShieldAddButtonClick:(BOOL)a0 enterFrom:(id)a1 authorID:(id)a2 groupID:(id)a3;
+ (void)trackDanmakShieldPostButtonClick:(BOOL)a0 enterFrom:(id)a1 authorID:(id)a2 groupID:(id)a3 content:(id)a4;
+ (void)trackDanmakShieldDelete:(BOOL)a0 enterFrom:(id)a1 authorID:(id)a2 groupID:(id)a3 content:(id)a4;
+ (void)trackDanmakShieldSwitchClick:(BOOL)a0 enterFrom:(id)a1 authorID:(id)a2 groupID:(id)a3 isOn:(BOOL)a4;
+ (id)trackCommonParams:(id)a0 awemeModel:(id)a1;
+ (id)obtainDanmakuAspectParamsWithEventName:(id)a0 awemeModel:(id)a1;
+ (BOOL)shouldTrackDanmakuExposedLikeDanmakuShowWith:(id)a0 model:(id)a1;
+ (id)storageServiceMain;
+ (void)trackEnterDanmakuSettingPanelWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 isLandScape:(BOOL)a3;
+ (void)trackDanmakPubShow:(id)a0 enterFrom:(id)a1 isShowDesc:(BOOL)a2 accountType:(id)a3;
+ (void)trackDanmakPubClick:(id)a0 enterFrom:(id)a1 isShowDesc:(BOOL)a2 extraParams:(id)a3 isLandScape:(BOOL)a4;
+ (void)trackDanmakMaskSwitchClick:(BOOL)a0 isLandScape:(BOOL)a1 authorID:(id)a2;
+ (void)monitorDanmakuMaskInfo:(id)a0 enterFrom:(id)a1 hasReceiveMask:(BOOL)a2;
+ (void)trackSwitchShowWithEnterFrom:(id)a0;


@end
