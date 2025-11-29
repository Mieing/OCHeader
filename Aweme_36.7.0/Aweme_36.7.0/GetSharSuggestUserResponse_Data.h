@class NSMutableArray;

@interface GetSharSuggestUserResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;

+ (id)descriptor;

@end
