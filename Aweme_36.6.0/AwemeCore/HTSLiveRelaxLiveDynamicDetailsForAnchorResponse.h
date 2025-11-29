@class HTSLiveRelaxLiveDynamicDetailsForAnchorData;

@interface HTSLiveRelaxLiveDynamicDetailsForAnchorResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRelaxLiveDynamicDetailsForAnchorData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
