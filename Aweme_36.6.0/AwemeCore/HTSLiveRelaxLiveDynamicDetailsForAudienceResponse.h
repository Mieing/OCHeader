@class HTSLiveRelaxLiveDynamicDetailsForAudienceData;

@interface HTSLiveRelaxLiveDynamicDetailsForAudienceResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRelaxLiveDynamicDetailsForAudienceData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
