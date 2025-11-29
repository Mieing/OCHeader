@class IESLiveKtvProfitUpdateKTVComponentFeatureSettingsResponse_ResponseData;

@interface IESLiveKtvProfitUpdateKTVComponentFeatureSettingsResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitUpdateKTVComponentFeatureSettingsResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
