@class UpdateExemptionListData;

@interface UpdateExemptionListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateExemptionListData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
