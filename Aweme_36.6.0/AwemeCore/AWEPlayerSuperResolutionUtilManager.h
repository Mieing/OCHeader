@interface AWEPlayerSuperResolutionUtilManager : NSObject

+ (BOOL)disableSrFlexBvc2Limit;
+ (id)srTypeSwitch;
+ (BOOL)enableVIPQualitySr;
+ (BOOL)enableVIPQualityDowngradeSr;
+ (BOOL)isVipPortraitWithModel:(id)a0;
+ (id)getSrTypeSwitchInfos;
+ (id)getTargetSRSwitchInfoWithInfos:(id)a0 bsModel:(id)a1;

@end
