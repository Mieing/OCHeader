@class NSMutableArray;

@interface GetCloudCollabTemplateListResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *templateListArray;
@property (readonly, nonatomic) unsigned long long templateListArray_Count;

+ (id)descriptor;

@end
