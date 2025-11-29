@class NSMutableArray;

@interface IESLiveLinkMicProfitGetSelfDisciplinePunchInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *puchInfosArray;
@property (readonly, nonatomic) unsigned long long puchInfosArray_Count;

+ (id)descriptor;

@end
