@class TingUserRemoteFeature_UserStatisticsInfo_CountType;

@interface TingUserRemoteFeature_UserStatisticsInfo_StatInterval : WXPBGeneratedMessage

@property (retain, nonatomic) TingUserRemoteFeature_UserStatisticsInfo_CountType *last3Days;
@property (retain, nonatomic) TingUserRemoteFeature_UserStatisticsInfo_CountType *last7Days;
@property (retain, nonatomic) TingUserRemoteFeature_UserStatisticsInfo_CountType *last15Days;
@property (retain, nonatomic) TingUserRemoteFeature_UserStatisticsInfo_CountType *last1Days;

+ (void)initialize;

@end
