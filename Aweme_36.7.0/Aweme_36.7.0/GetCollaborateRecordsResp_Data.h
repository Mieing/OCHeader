@class NSMutableArray;

@interface GetCollaborateRecordsResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *recordsArray;
@property (readonly, nonatomic) unsigned long long recordsArray_Count;

+ (id)descriptor;

@end
