@class NSMutableArray;

@interface PortalStatsResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *portalsArray;
@property (readonly, nonatomic) unsigned long long portalsArray_Count;

+ (id)descriptor;

@end
