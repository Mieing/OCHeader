@class NSMutableArray, SilenceListResponse_ResponseExtra;

@interface SilenceListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;
@property (retain, nonatomic) SilenceListResponse_ResponseExtra *extra;
@property (nonatomic) BOOL hasExtra;
@property (retain, nonatomic) NSMutableArray *responseDataArray;
@property (readonly, nonatomic) unsigned long long responseDataArray_Count;

+ (id)descriptor;

@end
