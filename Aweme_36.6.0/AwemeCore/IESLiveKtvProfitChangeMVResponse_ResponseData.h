@class NSMutableArray;

@interface IESLiveKtvProfitChangeMVResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *mvListArray;
@property (readonly, nonatomic) unsigned long long mvListArray_Count;

+ (id)descriptor;

@end
