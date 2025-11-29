@class NSMutableArray;

@interface EntranceInfoResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *entrancesArray;
@property (readonly, nonatomic) unsigned long long entrancesArray_Count;

+ (id)descriptor;

@end
