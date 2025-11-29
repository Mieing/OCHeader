@class PortalStatsResponse_Data;

@interface PortalStatsResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PortalStatsResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
