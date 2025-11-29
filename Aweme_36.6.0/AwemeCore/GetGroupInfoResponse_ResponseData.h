@class NSMutableArray;

@interface GetGroupInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *groupInfoListArray;
@property (readonly, nonatomic) unsigned long long groupInfoListArray_Count;

+ (id)descriptor;

@end
