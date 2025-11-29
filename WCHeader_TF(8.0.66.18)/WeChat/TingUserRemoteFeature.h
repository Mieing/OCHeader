@class NSString, NSMutableArray, TingUserRemoteFeature_UserStatisticsInfo;

@interface TingUserRemoteFeature : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *interactionHistory;
@property (retain, nonatomic) NSString *extraFeatureJson;
@property (nonatomic) unsigned long long lastUpdateTime;
@property (retain, nonatomic) TingUserRemoteFeature_UserStatisticsInfo *recommendUserStaticsInfo;

+ (void)initialize;

@end
