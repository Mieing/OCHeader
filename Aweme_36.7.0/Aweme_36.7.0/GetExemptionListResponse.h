@class ExemptionListData;

@interface GetExemptionListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ExemptionListData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
